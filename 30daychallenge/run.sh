#! /bin/bash
# compile and run files

FILENAME=Day29
NUM=0

clear
javac $FILENAME.java
# java $FILENAME
java $FILENAME < $FILENAME-test-case-$NUM.txt
