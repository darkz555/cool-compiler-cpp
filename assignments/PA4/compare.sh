#!/bin/sh

A=tmip1.txt
B=tmp2.txt

reflexer $1 | refparser | refsemant > $A

./mysemant $1 > $B

diff -y $A $B

rm $A $B
