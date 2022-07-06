#!/bin/sh/
cat /etc/passwd | grep -v '#' | cut -d':' -f1 | sed '1!n;d' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'