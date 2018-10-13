#!/bin/bash

problem_num=$1
problem_name=$2

newdir=$problem_num-$problem_name

mkdir $newdir
cd $newdir

touch $problem_name.c
touch $problem_name.cpp
touch $problem_name.py
touch $problem_name.lisp
