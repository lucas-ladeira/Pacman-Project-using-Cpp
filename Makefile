TARGET = pacman
SDIR = ./src
IDIR = ./include
CC = g++
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system -lm  -lpng
CFLAGS = -I$(IDIR) -g -Wextra -std=c++14

LDFLAGS =

ODIR = ./bin
LIBS = $(LDLIBS) $(LDFLAGS)

_DEPS = window.h console.h stateManager.h gameState.h playingState.h resources.h pacman.h entity.h maze.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o window.o console.o stateManager.o gameState.o playingState.o resources.o pacman.o entity.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: compile

compile: $(ODIR) $(TARGET)

$(ODIR):
	mkdir -p $(ODIR)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBS)

.PHONY: clean run

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	rmdir $(ODIR)

run: compile
	./$(TARGET) $(ARGS)
