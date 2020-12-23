targets = selection-sort
targets += insertion-sort

build: $(targets)
	@true

%: %.c
	gcc -o ../bin/$@ $< functions.c

test:
	cd ../bin
	../bin/selection-sort.exe 10
	../bin/selection-sort.exe 1000
	../bin/selection-sort.exe 100000
	../bin/selection-sort.exe 1000000
	../bin/selection-sort.exe 2000000
	../bin/selection-sort.exe 5000000