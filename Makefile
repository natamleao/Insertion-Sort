APPS = ./app
BIN = ./bin
INCLUDE = ./include
LIBDIR = ./lib
BUILD = ./build
SRC = ./src
FLAGS = -Wall -Werror  
FLAGGLUT = -lGL -lGLU -lglut

LIB = $(LIBDIR)/libebinsertionsort.a

all: \
    libeb \
	myapps

libeb: \
    $(BUILD)/calculateTime.o \
	$(BUILD)/insertionSort.o \
	$(BUILD)/structureArray.o

myapps: \
	cleanapp \
	$(BIN)/app

$(BUILD)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@ 

$(LIB): $(BUILD)/calculateTime.o $(BUILD)/insertionSort.o $(BUILD)/structureArray.o
	ar rcs $@ $^

$(BIN)/%: $(APPS)/%.c $(LIB)
	gcc $(FLAGS) $< -L$(LIBDIR) -lebinsertionsort -I $(INCLUDE) -o $@ $(FLAGGLUT)

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(BUILD)/* $(LIBDIR)/*

cleanapp:
	rm -rf $(BIN)/*