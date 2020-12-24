targets = selection-sort
targets += insertion-sort

build: $(targets)
	@true

%: %.c
	gcc -o ../bin/$@ $< functions.c

test:
	../bin/selection-sort.exe 10
	../bin/selection-sort.exe 1000
	../bin/selection-sort.exe 100000
	../bin/selection-sort.exe 1000000
	../bin/selection-sort.exe 2000000
	../bin/selection-sort.exe 5000000
	../bin/insertion-sort.exe 10
	../bin/insertion-sort.exe 1000
	../bin/insertion-sort.exe 100000
	../bin/insertion-sort.exe 1000000
	../bin/insertion-sort.exe 2000000
	../bin/insertion-sort.exe 5000000

clean:
	@rm -f $(targets)

.PHONY: clean
