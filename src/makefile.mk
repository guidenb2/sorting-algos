targets = selection-sort

build: $(targets)
	@true

%: %.c
	gcc -o ../bin/$@ $<

test:
	../bin/selection-sort 5
