
static_cpp_lib := $(shell g++ -print-file-name=libstdc++.a)
shared_cpp_lib := $(shell g++ -print-file-name=libstdc++.so)
a.out: main.o arch.a
	gcc $^ -o $@ $(shared_cpp_lib)

arch.a: a.o
	ar -r $@ $^
%.o: %.c
	gcc -c $<

%.o: *.cpp
	g++ -c $<

clean:
	rm -f a.out *.o *.a
