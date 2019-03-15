# Linux (default)
#TARGET = assignment
#LDFLAGS = -lGL -lGLU -lglut
#CFLAGS = -Wall -std=c99

# Windows (cygwin)
ifeq "$(OS)" "Windows_NT"
TARGET = assignment.exe
CFLAGS += -D_WIN32
endif

# OS X
#ifeq "$(OSTYPE)" "darwin"
LDFLAGS = -framework Carbon -framework OpenGL -framework GLUT
CFLAGS += -D__APPLE__
#endif

CC=gcc
src= $(wildcard *.c)
# build an executable named tute1 from tute1.c
all: assignment1.c
	$(CC) $(CFLAGS) -Wno-deprecated-declarations -o assignment1 $(src) $(LDFLAGS) 

.PHONY: clean
clean: 
	$(RM) assignment1