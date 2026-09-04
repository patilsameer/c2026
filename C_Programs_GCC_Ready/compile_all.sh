#!/usr/bin/env sh
set -eu
mkdir -p build
for src in [0-9][0-9]_*.c; do
    exe="build/${src%.c}"
    echo "Compiling $src"
    gcc -std=c11 -Wall -Wextra -Wpedantic "$src" -o "$exe"
done
echo "All programs compiled successfully."
