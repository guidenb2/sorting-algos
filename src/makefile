targets = selection-sort
targets += insertion-sort
targets += bubble-sort

build: $(targets)
	@true

%: %.c
	gcc -o ../bin/$@ $< functions.c

test:
	../bin/selection-sort.exe 10
	../bin/selection-sort.exe 1000
	../bin/selection-sort.exe 10000
	../bin/selection-sort.exe 100000
	../bin/selection-sort.exe 1000000
	../bin/insertion-sort.exe 10
	../bin/insertion-sort.exe 1000
	../bin/insertion-sort.exe 10000
	../bin/insertion-sort.exe 100000
	../bin/insertion-sort.exe 1000000
	../bin/bubble-sort.exe 10
	../bin/bubble-sort.exe 1000
	../bin/bubble-sort.exe 10000
	../bin/bubble-sort.exe 100000
	../bin/bubble-sort.exe 1000000

clean:
	rm -f ../bin/selection-sort
	rm -f ../bin/insertion-sort
	rm -f ../bin/bubble-sort

.PHONY: clean
