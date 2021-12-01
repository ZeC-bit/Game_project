FLAGS = -pedantic-errors -std=c++11

library.o: lirary.cpp library.h
	g++ $(FLAGS) -c $<
	
garden.o: garden.cpp garden.h
	g++ $(FLAGS) -c $<

lecture.o: lecture.cpp lecture.h
	g++ $(FLAGS) -c $<

cafeteria.o: cafeteria.cpp cafeteria.h
	g++ $(FLAGS) -c $<

save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<xww

execution.o: execution.cpp execution.h library.h garden.h lecture.h cafeteria.h save_load.h
	g++ $(FLAGS) -c $<

main.o: main.cpp
	g++ $(FLAGS) -c $<

main: main.o execution.o save_load.o cafeteria.o lecture.o garden.o library.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f *.o main
	
.PHONY: clean