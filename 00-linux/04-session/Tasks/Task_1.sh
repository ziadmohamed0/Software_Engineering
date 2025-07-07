#!/bin/bash

addation_fun() {
	local num1=$1
	local num2=$2

	result=$((num1 + num2))
	echo "Result is = $result"
	echo ""
	while [ "$result" -gt 0 ]; do
		echo "Sum = $result "
		((result--))
	done
}

echo "Enter number 1:"
read num1

echo "Enter number 2:"
read num2

echo "-----------------------"
addation_fun $num1 $num2
echo "-----------------------"
