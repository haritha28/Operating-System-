#!/bin/bash
echo -n "Enter the number of times you want to run"
while [ $c -le 5 ]
do 
	echo "Welcome $c times"
	(( c++ ))
done