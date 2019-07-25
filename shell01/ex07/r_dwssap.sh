#!/bin/sh
cat /etc/passwd | grep -v "#" | sed 1d | awk '{if(NR % 2)print $0}' | awk -F ':*' '{print $1}' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d '\n'
