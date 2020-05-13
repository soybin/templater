CC = g++ -g
CCFLAGS = -o templater

templater: main.cpp
	$(CC) $(CCFLAGS) main.cpp
