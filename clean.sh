#!/bin/sh
root_dir="/rancore1/home/ratnesh1.tiwari/learning_Ratnesh/cpp_weekly/"
for f in $(find $root_dir -type f -name 'Makefile')
do
	#echo $f
	d=$(dirname $f)
	b=$(basename $d)
	printf "\nInside dir: $b\n"
	cd $d
	make clean
	cd ../
done

