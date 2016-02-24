all:sri

sri: s1.o sort1.o amstrong.o
	gcc s1.o sort1.o -o sri.o

s1.o: s1.c
	gcc -c s1.c

sort1.o: sort1.c
	gcc -c sort1.c
