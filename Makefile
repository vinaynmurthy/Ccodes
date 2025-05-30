# Makefile

CC 		= gcc
CFLAGS 	= -g -Wall -Wunused-value
TARGET = $(NAME).a

$(TARGET):
	$(CC) $(CFLAGS) $(NAME).c -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)