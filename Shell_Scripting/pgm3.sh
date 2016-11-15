#!/bin/bash
echo "Enter a number"
read number
fact=1
while [ $number -ge 1 ]
do
fact=`expr $fact \* $number`
number=`expr $number - 1`
done
echo "Factorial of $n is $fact"