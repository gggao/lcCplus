#!/bin/sh
env > aa
clang++ -std=c++17 -stdlib=libc++ -g ./main.cpp ./a_1/1_towsum.cpp  -o ./main

