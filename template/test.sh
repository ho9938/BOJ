#!/usr/bin/bash

echo "test start..."

if [ $1 = "c" ]
then
	gcc test.c -o test
fi

if [ $1 = "cpp" ]
then
	g++ test.cpp -o test
fi

for i in $(seq 1 $2)
do
	if [[ $1 = "py" ]]; then
		./test.py < in$i > result
	else
		./test < in$i > result
	fi

	# diff=$(diff -y --suppress-common-lines out$i result)
	# if [[ $diff ]]; then
	# 	echo "test case $i failed"
	# 	echo "$diff"
	# else
	# 	echo "test case $i passed"
	# fi

	echo "test case $i validation start..."
	diff -yw result out$i
	echo ""
	echo "test case $i validation complete..."
	
done

echo "test complete..."