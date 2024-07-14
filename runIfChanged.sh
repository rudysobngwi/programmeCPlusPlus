#!/bin/bash
last_modification=`stat -c %Y $1`
seconds=2s
#echo "last_modification = $last_modification"

while true
    do
        #new_modification=`stat -s  $1 | awk '{print $10 }' | awk -F"=" '{print $2}'`
        new_modification=`stat -c %Y $1`
        if [ $new_modification -gt $last_modification ]
            then
            echo " ------ Start the $1 compilation   ---------"
	    clear
	    rm -rf xxxxxx
	    gcc -lstdc++  -Wall -o xxxxxx $1
            echo " ------ Start the $1 execution   ---------"
            if [ -f fonctions ]
	    then
	    ./xxxxxx
	    fi
            echo " ------ Execution of $1 finished ---------"
            echo ""
            last_modification=$new_modification
        else    
            #echo "sleeping for $seconds seconds"
            sleep $seconds
        fi    
    done
