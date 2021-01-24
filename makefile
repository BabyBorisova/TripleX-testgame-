CC = g++
CFLAGS = -g -Wall
TARGET = TripleX

run: all
	./$(TARGET)

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp 

clean:
	$(RM) $(TARGET)