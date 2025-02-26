.SILENT:

CC := gcc
BIN := btTracker
CFLAGS := -Wall -Wextra -Werror -Ofast  -funroll-loops -fomit-frame-pointer -std=c17 -pipe
LDFLAGS := -flto -pthread -lm
CFG := ./src/config.h
SRC	:= ./src/main.c 
BUILD_DIR := ./build
OBJ_DIR := $(BUILD_DIR)/obj
BIN_DIR := $(BUILD_DIR)/bin
OBJ := $(patsubst ./src/%.c,$(OBJ_DIR)/%.o,$(SRC))

RED := \033[1;31m
GREEN := \033[1;32m
YELLOW := \033[1;33m
BLUE := \033[1;34m
RESET := \033[0m

GUI := $(shell grep -E '^\s*#define\s+GUI\s+' $(CFG) | cut -d' ' -f3)

ifeq ($(GUI), GTK)
	SRC += ./src/gui-gtk.c
	OBJ+= $(BUILD_DIR)/obj/gui-gtk.o
	LDFLAGS += -lgtk-4.0
endif

all: dirs $(BIN_DIR)/$(BIN)

dirs:
	mkdir -p $(OBJ_DIR) $(BIN_DIR)
	echo -e "$(GREEN)Directories created$(RESET)"

$(BIN_DIR)/$(BIN): $(OBJ)
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@
	echo -e "$(GREEN)Binary created$(RESET)"

$(OBJ_DIR)/%.o: ./src/%.c
	$(CC) -c $< -o $@ $(CFLAGS)
	echo -e "$(BLUE)Compiled $<$(RESET)"

clean:
	@rm -rvf $(BUILD_DIR) | sed -e 's/^/\x1b[1;33m/' -e 's/$$/\x1b[0m/'