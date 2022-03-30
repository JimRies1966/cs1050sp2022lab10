a.out : libjimrutil.a lab10.o
	compile lab10.o -L. -ljimrutil

lab10.o : lab10.c
	compile -c lab10.c

clean :
	@rm -f *.o
	@rm -f a.out
