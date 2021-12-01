FLAGS = -pedantic-errors -std=c++11

library.o: lirary.cpp save_load.h
	g++ $(FLAGS) -c $<
	
save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<

save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<

save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<

save_load.o: save_load.cpp save_load.h
	g++ $(FLAGS) -c $<

main.o: main.cpp save_load.h
	g++ $(FLAGS) -c $<

main: save_load.o main.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f *.o main
	
.PHONY: clean