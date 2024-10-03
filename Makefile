DrinkLibrary: Drink.o DrinkLibrary.o Driver.o Recipe.o
	g++ Drink.o DrinkLibrary.o Driver.o Recipe.o -o DrinkLibrary

Drink.o: Drink.cpp Drink.h
	g++ -c Drink.cpp

DrinkLibrary.o: DrinkLibrary.cpp DrinkLibrary.h
	g++ -c DrinkLibrary.cpp

Driver.o: Driver.cpp
	g++ -c Driver.cpp

Recipe.o: Recipe.cpp Recipe.h
	g++ -c Recipe.cpp

clean:
	del -f *.o DrinkLibrary
