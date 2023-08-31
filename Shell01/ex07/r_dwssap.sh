#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F':' '{ print $1 }'  | rev | sort -r | awk -v li=$FT_LINE1 -v lf=$FT_LINE2 'li<=NR&&NR<=lf' | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./g' | tr -d '\n'
