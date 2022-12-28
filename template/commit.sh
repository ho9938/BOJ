#!/usr/bin/bash

if [[ $# -lt 1 ]]; then
    echo "aborted: language type needed"
else
    dir=${PWD##*/}
	git add .
	git commit -m "$dir solved with $1"
    cd ..
fi