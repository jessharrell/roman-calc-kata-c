all: calculator.o
	ar -cvq libCalculator.a calculator.o

calculator.o: calculator.c
	g++ -c calculator.c

test: libCalculator.a calculatorTest.c
	gcc -o calculatorTest calculatorTest.c -L./ -lCalculator