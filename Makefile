app: app.o arithmetic.o
	g++ -o app app.o arithmetic.o

app.o: app.cpp
	g++ -c app.cpp

arithmetic.o: arithmetic.cpp
	g++ -c arithmetic.cpp

clean:
	rm *.o

run:
	./app
	


