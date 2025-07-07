#!/bi/bash

echo "------------- Task 7 -------------"

echo "Enter file name:"
read filename

if [ -e "$filename" ] && [ -r "$filename" ]; then 
	echo "file readable & exist"
	echo "--------------------------------------"
	head -n 10 "$filename"
else
	echo "Error !!"
fi

