CC = g++ -std=c++17
CFLAGS = -Wall
EXEC_NAMES = IoTSystem 
SRC_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(notdir $(SRC_FILES:.cpp=.o))

all : $(EXEC_NAMES)

clean :
	rm bin/*.o

$(EXEC_NAMES) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAMES) $(patsubst %.o, bin/%.o,$(OBJ_FILES)) $(CFLAGS)

%.o : src/%.cpp
	$(CC) -c -o bin/$@ $< $(CFLAGS)




