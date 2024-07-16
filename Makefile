##Uhh Complie the thing
lilikmake: lilik.c
	mkdir output
	cc -c lilik.c -o output/lilik.o
	cc output/lilik.o -o output/lilik -static -lm
	cp output/lilik lilik

clean:
	rm -fr output
	rm lilik
