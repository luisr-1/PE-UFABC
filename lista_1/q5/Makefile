CC = gcc
CFLAGS = -Wall
TARGET = temperature_scale_converter
SRC = temperature_scale_converter.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
