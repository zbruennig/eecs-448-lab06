#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed TestSuite.o
prog: main.o TestSuite.o
	g++ -g -Wall -std=c++11 TestSuite.o main.o LinkedListOfInts.o -o prog


main.o: main.cpp TestSuite.h
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed TestSuite.o recipe and compiler command
TestSuite.o: TestSuite.h
	g++ -g -Wall -std=c++11 -c TestSuite.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o TestSuite.o prog
