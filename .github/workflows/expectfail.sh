#!/bin/bash

if $1; then
    echo "Passed"
else
    echo "Failed"
    exit 1
fi
