#!/bin/sh

touch -A -000001 -a bomb.txt | stat bomb.txt | cut -c 72-73
