#!/bin/bash
echo "Enter the length"
read length
echo "Enter the breadth"
read breadth
area=`expr $length * $breadth`
permi=`expr $length + $length + $breadth + $breadth`
echo "Area is $area"
echo "Perimeter is $permi"