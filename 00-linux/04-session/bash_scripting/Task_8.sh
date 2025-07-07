/!/bin/bash 

echo "------------- Task 8 -------------"

echo "Enter file name: "
read fileName 

if [ -e "$fileName" ]; then
	if [ -f "$fileName" ]; then
		echo "File exist - regular"
	elif [ -d "$fileName" ]; then
		echo "File exist - directory"
	else
		echo "File exist - but not directory or regular"
	fi
else 
	echo "Erorr !! - File not exist"
fi

