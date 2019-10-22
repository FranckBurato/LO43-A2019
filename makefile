CC = g++ -std=c++17
CFLAGS = -Wall
EXEC_NAMES = IoTSystem 
OBJ_FILES = Server.o Scheduler.o Data.o Sensor.o Humidity.o Light.o Temp.o Sound.o main.o

all : $(EXEC_NAMES)

$(EXEC_NAMES) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAMES) $(OBJ_FILES)

%.o : src/%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<




