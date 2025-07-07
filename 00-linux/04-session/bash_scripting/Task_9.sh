#!/bin/bash

echo "------------- Task 9 -------------"

fun_calc() {
	local num=$1
	numb=1
	for ((i = 1; i <= num; i++)); do
		numb=$(( i * numb))
	done	
	echo "$numb"
}

echo "Enter Number: "
read num

result=$(fun_calc "$num")
echo "factorial = $result"

