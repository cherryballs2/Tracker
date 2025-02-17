CC = gcc
BIN = btTracker
CFLAGS = -Wall -Wextra -Werror -Ofast  -funroll-loops -fomit-frame-pointer -std=c17 -pipe
LDFLAGS = -flto -pthread -lm
CFG = ./src/config.h
SRC	= ./src/main.c 
BUILD = ./build
OBJ = $(BUILD)/obj/main.o

GUI = $(shell grep -E '^\s*#define\s+GUI\s+' $(CFG) | awk '{print $$3}')
$(info GUI = $(GUI))

ifeq ($(GUI), SDL)
	SRC += .src/gui-sdl.c
	OBJ+= $(BUILD)/obj/gui-sdl.o
	LDFLAGS += -lSDL2
endif

all: $(OBJ)
	mkdir -p $(BUILD)
	mkdir -p $(BUILD)/obj
	mkdir -p $(BUILD)/bin
	$(CC) $(OBJ) $(CFLAGS) $(LDFLAGS) -o $(BUILD)/bin/$(BIN)

$(BUILD)/obj/%.o: ./src/%.c
	mkdir -p $(BUILD)/obj
	$(CC) -c $< -o $@ $(CFLAGS)
clean:
	rm -rvf $(BUILD)