#!/bin/bash

echo "Compilation du programme : $1" 

g++ -o $2 $1
echo "compilation OK ? $?"
echo "Execution du programme $2"
./$2 

echo "execution OK ? $?"



