all:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Complex.o Complex.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Complex.o 

tests:
	./mytest_runner
oden:
	make all
	make tests

oden_valgrind:
	make all
	valgrind --leak-check=full ./mytest_runner

tt:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest3.h && g++ -c -o Complex.o Complex.cpp && g++ -o mytest_runner2 myrunner.cpp -I$HOME/cxxtest-4.4 Complex.o && ./mytest_runner2

ray:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner_ray.cpp mytest2.h && g++ -c -o Complex_ray.o Complex_ray.cpp && g++ -o mytest_runner3 myrunner_ray.cpp -I$HOME/cxxtest-4.4 Complex.o && ./mytest_runner3
clean_ray:
	rm -f *.o mytest_runner3 myrunner_ray.cpp
clean:
	rm -f *.o mytest_runner myrunner.cpp