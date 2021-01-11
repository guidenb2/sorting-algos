targets = generator
targets += selection-sort
targets += insertion-sort
targets += quick-sort

build: $(targets)
	@true

generator: generator.c
	gcc -o ../bin/generator generator.c generator-funcs.c

%: %.c
	gcc -o ../bin/$@ $< functions.c

test:
	../bin/generator.exe 10000
	../bin/selection-sort.exe < ../test/unsorted.txt
	../bin/selection-sort.exe < ../test/sorted.txt
	../bin/selection-sort.exe < ../test/reversed.txt
	../bin/insertion-sort.exe < ../test/unsorted.txt
	../bin/insertion-sort.exe < ../test/sorted.txt
	../bin/insertion-sort.exe < ../test/reversed.txt
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 100000
	../bin/selection-sort.exe < ../test/unsorted.txt
	../bin/selection-sort.exe < ../test/sorted.txt
	../bin/selection-sort.exe < ../test/reversed.txt
	../bin/insertion-sort.exe < ../test/unsorted.txt
	../bin/insertion-sort.exe < ../test/sorted.txt
	../bin/insertion-sort.exe < ../test/reversed.txt
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 500000
	../bin/selection-sort.exe < ../test/unsorted.txt
	../bin/selection-sort.exe < ../test/sorted.txt
	../bin/selection-sort.exe < ../test/reversed.txt
	../bin/insertion-sort.exe < ../test/unsorted.txt
	../bin/insertion-sort.exe < ../test/sorted.txt
	../bin/insertion-sort.exe < ../test/reversed.txt
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 1000000
	../bin/selection-sort.exe < ../test/unsorted.txt
	../bin/selection-sort.exe < ../test/sorted.txt
	../bin/selection-sort.exe < ../test/reversed.txt
	../bin/insertion-sort.exe < ../test/unsorted.txt
	../bin/insertion-sort.exe < ../test/sorted.txt
	../bin/insertion-sort.exe < ../test/reversed.txt
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 2000000
	../bin/selection-sort.exe < ../test/unsorted.txt
	../bin/selection-sort.exe < ../test/sorted.txt
	../bin/selection-sort.exe < ../test/reversed.txt
	../bin/insertion-sort.exe < ../test/unsorted.txt
	../bin/insertion-sort.exe < ../test/sorted.txt
	../bin/insertion-sort.exe < ../test/reversed.txt
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 5000000
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 10000000
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt
	../bin/generator.exe 20000000
	../bin/quick-sort.exe < ../test/unsorted.txt
	../bin/quick-sort.exe < ../test/sorted.txt
	../bin/quick-sort.exe < ../test/reversed.txt

clean:
	rm -f ../bin/generator
	rm -f ../bin/selection-sort
	rm -f ../bin/insertion-sort
	rm -f ../bin/quick-sort
	rm -f ../test/reversed.txt
	rm -f ../test/sorted.txt
	rm -f ../test/unsorted.txt

.PHONY: clean
