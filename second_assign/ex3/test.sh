#!/bin/bash
printf "compiling\n"
g++ -g main.cpp -o main
printf "compile done\n"
printf "normal test running\n"
./main < ./test_data/sym_data.txt
printf "normal test done\n"
printf "not sym test running\n"
./main < ./test_data/not_sym_data.txt
printf "not sym test done\n"
printf "huge test running\n"
./main < ./test_data/huge_sym_data.txt 
printf "huge test done\n"
