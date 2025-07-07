#!/bin/bash

Days=("Saturday" "Sunday" "Monday" "Tuesday" "Wednesday" "Thursday" "Friday")

CurrentDay=0

AddDay=10

FutureDay=$(( (CurrentDay + AddDay) % 7 ))

echo "The day in $AddDay days will be: ${Days[$FutureDay]}"