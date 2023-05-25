CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRCDIR = .
BINDIR = ./binary

SOURCES := $(shell find $(SRCDIR) -name '*.c')
OBJECTS := $(SOURCES:%.c=%.o)
TARGETS := $(OBJECTS:%.o=%)

.PHONY: all clean

all: $(TARGETS)

%: %.o
	$(CC) $(CFLAGS) $< -o $(BINDIR)/$@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGETS) $(BINDIR)/*
