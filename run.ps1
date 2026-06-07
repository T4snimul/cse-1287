param(
  [Parameter(Mandatory=$true)]
  [string]$File
)

# Variables
$FullPath = ( Resolve-Path $File ).Path
$Root = Split-Path -Parent $MyInvocation.MyCommand.Path
$RelativePath = ( Resolve-Path -Relative $FullPath ) -replace '^\.\\', ''
$OutputRelative = [System.IO.Path]::ChangeExtension($RelativePath, ".exe")
$OutputPath = Join-Path $Root "build\$OutputRelative"
$OutputDir = Split-Path -Parent $OutputPath

# Check extension
if ([System.IO.Path]::GetExtension($FullPath) -ne ".c") {
    Write-Host "Error: File must be a .c file" -ForegroundColor Red
    exit 1
}

# Create output directory if needed
New-Item -ItemType Directory -Force -Path $OutputDir | Out-Null

Write-Host "Compiling..." -ForegroundColor Cyan

# Compile
$CompileOutput = gcc $FullPath -Wall -Wextra -std=c11 -o $OutputPath 2>&1

if ($CompileOutput) {
    $CompileOutput
}

if ($LASTEXITCODE -ne 0) {
    exit 1
}

Write-Host "`nCompilation successful." -ForegroundColor Green
Write-Host "Executable: $OutputPath" -ForegroundColor Yellow

Write-Host "`nRunning program..." -ForegroundColor Cyan
Clear-Host

$StartTime = Get-Date

& $OutputPath
$ExitCode = $LASTEXITCODE

$EndTime = Get-Date
$ExecutionTime = ($EndTime - $StartTime).TotalSeconds

Write-Host ""
Write-Host "----------------------------------------" -ForegroundColor DarkGray
Write-Host "Process returned $ExitCode" -ForegroundColor Yellow
Write-Host ("Execution time : {0:N3} s" -f $ExecutionTime) -ForegroundColor Yellow
Write-Host "----------------------------------------" -ForegroundColor DarkGray

Write-Host "`nPress any key to continue..." -ForegroundColor DarkGray
[void][System.Console]::ReadKey($true)
