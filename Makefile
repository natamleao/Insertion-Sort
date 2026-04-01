APPS = ./app
BIN = ./bin
INCLUDE = ./include
LIBDIR = ./lib
BUILD = ./build
SRC = ./src
FLAGS = -Wall -Werror  
FLAGGLUT = -lGL -lGLU -lglut

LIB = $(LIBDIR)/libdsa.a

all: \
    libeb \
	myapps

libeb: \
    $(BUILD)/execution_time.o \
	$(BUILD)/insertion_sort.o \
	$(BUILD)/array.o

myapps: \
	cleanapp \
	$(BIN)/app

$(BUILD)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@ 

$(LIB): $(BUILD)/execution_time.o $(BUILD)/insertion_sort.o $(BUILD)/array.o
	ar rcs $@ $^

$(BIN)/%: $(APPS)/%.c $(LIB)
	gcc $(FLAGS) $< -L$(LIBDIR) -ldsa -I $(INCLUDE) -o $@ $(FLAGGLUT)

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(BUILD)/* $(LIBDIR)/*

cleanapp:
	rm -rf $(BIN)/*