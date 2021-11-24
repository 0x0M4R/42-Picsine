#!/bin/bash
find . -not -name ".*" -or -type d | wc -l | tr -d ' '