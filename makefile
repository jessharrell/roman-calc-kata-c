all: calculator.o
	ar -crv libcalculator.a calculator.o

calculator.o: calculator.c
	gcc -c calculator.c

calculatorTest.o: calculatorTest.c
	gcc -c calculatorTest.c

test: libcalculator.a calculatorTest.o
	gcc -o calculatorTest calculatorTest.o -L. -lcalculator -lcheck -lpthread -lm