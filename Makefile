# ============================================================
#  Cross-platform Makefile — Linux & Windows (MinGW / MSYS2)
# ============================================================

TARGET = pacman
SDIR   = ./src
IDIR   = ./include
ODIR   = ./bin
CC     = g++
CFLAGS = -I$(IDIR) -g -Wextra -std=c++17

# ------------------------------------------------------------
# OS detection
# ------------------------------------------------------------
ifeq ($(OS),Windows_NT)
    DETECTED_OS := Windows
else
    DETECTED_OS := $(shell uname -s)
endif

# ------------------------------------------------------------
# Platform-specific settings
# ------------------------------------------------------------
ifeq ($(DETECTED_OS),Windows)
    # Windows (MinGW / MSYS2)
    TARGET_EXE  = $(TARGET).exe
    LDLIBS      = -lsfml-graphics -lsfml-window -lsfml-system -lm
    MKDIR_CMD   = if not exist "$(ODIR)" mkdir "$(ODIR)"
    RM_OBJ_CMD  = del /Q "$(ODIR)\*.o" 2>nul & del /Q "*~" 2>nul
    RMDIR_CMD   = rmdir /S /Q "$(ODIR)" 2>nul & exit 0
    RUN_CMD     = $(TARGET_EXE)
else
    # Linux / macOS
    TARGET_EXE  = $(TARGET)
    LDLIBS      = -lsfml-graphics -lsfml-window -lsfml-system -lm
    MKDIR_CMD   = mkdir -p $(ODIR)
    RM_OBJ_CMD  = rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
    RMDIR_CMD   = rmdir $(ODIR)
    RUN_CMD     = ./$(TARGET_EXE)
endif

LDFLAGS =
LIBS    = $(LDLIBS) $(LDFLAGS)

# ------------------------------------------------------------
# Source / header / object lists
# ------------------------------------------------------------
_DEPS = window.h console.h stateManager.h gameState.h playingState.h \
        resources.h pacman.h entity.h maze.h
DEPS  = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ  = main.o window.o console.o stateManager.o gameState.o \
        playingState.o resources.o pacman.o entity.o
OBJ   = $(patsubst %,$(ODIR)/%,$(_OBJ))

# ------------------------------------------------------------
# Rules
# ------------------------------------------------------------
all: compile

compile: $(ODIR) $(TARGET_EXE)

$(ODIR):
	$(MKDIR_CMD)

$(ODIR)/%.o: $(SDIR)/%.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET_EXE): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBS)

.PHONY: clean run

clean:
	$(RM_OBJ_CMD)
	$(RMDIR_CMD)

run: compile
	$(RUN_CMD) $(ARGS)
