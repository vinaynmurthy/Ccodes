# Makefile

CC 		= gcc
CFLAGS 	= -g -Wall -Wunused-value
LDFLAGS = -lm
TARGET = $(NAME).a

$(TARGET):
	$(CC) $(CFLAGS) $(NAME).c $(LDFLAGS) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)