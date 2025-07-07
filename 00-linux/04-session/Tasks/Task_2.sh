#!/bin/bash

mkdir -p dip

touch dip/f{1..5}

echo "Files in dip/:"
echo ""
ls -l dip/
echo ""

for file in dip/*; do
	echo "deleting $file"
	rm -f "$file"
done 

echo ""
rmdir dip
echo "Directory deleted !"
