#!/bin/sh

grep -rv "Nicolas" $1 | grep -i "nicolas" | grep -i "bomber" | grep "424242-4242" | cut -c 31-41
