#!/bin/bash

echo "------------- Task 6 -------------"

echo "Enter number: "
read num

if [ "$num" -gt 10 ]; then 
	echo "Number greater than 10"
elif [ "$num" -lt 10 ]; then 
	echo "Number less than 10"
elif [ "$num" -eq 10 ]; then
	echo "Number equal 10"
else 
	echo "Error !!"
fi
