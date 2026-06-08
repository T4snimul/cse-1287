#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 1 ]]; then
  echo "Usage: $0 <file.c>" >&2
  exit 1
fi

file="$1"
full_path="$(realpath "$file")"
root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ "${full_path##*.}" != "c" ]]; then
  echo "Error: File must be a .c file" >&2
  exit 1
fi

relative_path="$(realpath --relative-to="$root_dir" "$full_path")"
output_relative="${relative_path%.c}.exe"
output_path="$root_dir/build/$output_relative"
output_dir="$(dirname "$output_path")"

mkdir -p "$output_dir"

echo "Compiling..."

compile_output="$(gcc "$full_path" -Wall -Wextra -std=c11 -o "$output_path" 2>&1)" || {
  [[ -n "$compile_output" ]] && printf '%s\n' "$compile_output"
  exit 1
}

[[ -n "$compile_output" ]] && printf '%s\n' "$compile_output"

echo
echo "Compilation successful."
echo "Executable: $output_path"
echo
echo "Running program..."
clear

start_time="$(date +%s%N)"
"$output_path"
exit_code=$?
end_time="$(date +%s%N)"

execution_time=$(awk -v start="$start_time" -v end="$end_time" 'BEGIN { printf "%.3f", (end - start) / 1000000000 }')

echo
echo "----------------------------------------"
echo "Process returned $exit_code"
echo "Execution time : $execution_time s"
echo "----------------------------------------"
echo
read -n 1 -s -r -p "Press any key to continue..."
echo
