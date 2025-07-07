!/bin/bash

user_inupt=""

until [ "$user_input"  = "exit" ]; do
	echo "------------- Task 5 -------------"
	echo "Enter string (exit for quit):"
	read user_input
	echo "String is: $user_input"
	echo ""
done 

echo "Goodbye :)"
