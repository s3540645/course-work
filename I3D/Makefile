# Linux (default)
TARGET = assignment
LDFLAGS = -lm -lGL -lGLU -lglut
CFLAGS = -Wall -std=c99

# Windows (cygwin)
ifeq "$(OS)" "Windows_NT"
TARGET = assignment.exe
CFLAGS += -D_WIN32
endif

# OS X
#ifeq "$(OSTYPE)" "darwin"
#LDFLAGS = -framework Carbon -framework OpenGL -framework GLUT
#CFLAGS += -D__APPLE__
#endif

CC=gcc
src= tute3.c
# build an executable named tute1 from tute1.c
all: tute3.c
	$(CC) $(CFLAGS) -Wno-deprecated-declarations -o tute3 $(src) $(LDFLAGS) 

.PHONY: clean
clean: 
	$(RM) tute3
