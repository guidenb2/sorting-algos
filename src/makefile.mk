selection-sort: selection-sort.c
	gcc -o ../bin/$@ $< functions.c


test:
	../bin/selection-sort.exe 10
	../bin/selection-sort.exe 1000
	../bin/selection-sort.exe 100000
