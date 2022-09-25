#!/bin/bash

printf "compiling\n"
g++ -g main.cpp -o main
printf "compile done\n"
printf "normal test running\n"
./main < normal_input.txt
printf "normal test done\n"
printf "empty test running\n"
./main < empty_input.txt
printf "empty test done\n"
printf "one node test running\n"
./main < one_node_input.txt
printf "one node test done\n"
printf "huge test running\n"
./main < huge_input.txt
printf "huge test done\n"
