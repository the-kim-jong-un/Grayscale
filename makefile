B = bin
O = obj
S = src
FLAGS = -c -Wall

all: $(O) $(B) $(B)/main

$(B)/main: $(O)/Convert.o 
	g++ -ggdb $(S)/main.cpp -o $(B)/main $(O)/*.o -lsfml-graphics 
$(O)/Convert.o: 
	g++ $(FLAGS) $(S)/Convert.cpp -o $(O)/Convert.o


$(O):
	mkdir $(O)

$(B):
	mkdir $(B)

clean: $(O) $(B)
	rm -rf $(O)
	rm -rf $(B)
