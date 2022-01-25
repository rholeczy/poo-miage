#!/bin/bash

if test -f "prog"; then
    echo "Suppression prog"
    rm prog
fi

if test -f "$1"; then
    lefile=$1
    fileo=${lefile/cpp/"o"}
    if test -f "$fileo"; then
        echo "Suppression fichier .o"
        rm $fileo
    fi
    g++ -c $1 -o $fileo
    g++ $fileo -o prog
    rm *.o
    ./prog
fi


