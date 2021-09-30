# target: prerequisite 1 prerequisite 2 prerequisite 3
#<TAB>shell command(s)

prac: main.o tome.o
	g++ -o prac main.o tome.o

main.o: main.cpp
	g++ -c main.cpp


tome.o: tome.cpp
	g++ -c tome.cpp


clean:
	@echo "Start afresh.."
	rm -rfv *.o prac


run:
	./prac
