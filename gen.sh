#!/usr/bin/bash

if [[ $# -lt 1 ]]; then
    echo "aborted: directory name needed"
else
    cp -r template/ $1
    cd $1
fi