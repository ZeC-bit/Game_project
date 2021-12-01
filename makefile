FLAGS = -pedantic-errors -std=c++11

Under_the_Mistletoe: main.o execution.o save_load.o cafeteria.o lecture.o garden.o library.o
	g++ $(FLAGS) $^ -o $@

library.o: library.cpp library.h
	g++ $(FLAGS) -c $<
	
garden.o: garden.cpp garden.h
	g++ $(FLAGS) -c $<

lecture.o: lecture.cpp lecture.h
	g++ $(FLAGS) -c $<

cafeteria.o: cafeteria.cpp cafeteria.h
	g++ $(FLAGS) -c $<

save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<

execution.o: execution.cpp execution.h library.h garden.h lecture.h cafeteria.h save_load.h
	g++ $(FLAGS) -c $<

main.o: main.cpp
	g++ $(FLAGS) -c $<

clean:
	rm -f *.o main
	
.PHONY: clean