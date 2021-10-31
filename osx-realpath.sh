#!/usr/bin/env bash

# compile
gcc -o osx-realpath main.c

# run
exec ./osx-realpath "$@"
