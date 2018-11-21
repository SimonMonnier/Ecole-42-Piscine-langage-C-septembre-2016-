#!/bin/sh
find . -regex ".*\.sh" | rev | cut -d / -f1 | rev | cut -d . -f1
