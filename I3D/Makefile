# Linux (default)
TARGET = tute1
LDFLAGS = -lGL -lGLU -lglut
CFLAGS = -Wall -std=c99

# Windows (cygwin)
ifeq "$(OS)" "Windows_NT"
TARGET = tute2.exe
CFLAGS += -D_WIN32
endif

# OS X
ifeq "$(OSTYPE)" "darwin"
LDFLAGS = -framework Carbon -framework OpenGL -framework GLUT
CFLAGS += -D__APPLE__
endif

# build an executable named tute1 from tute1.c
all: tute2.c 
	gcc -o tute2 -Wall -lGL -lGLU -lglut tute2.c

clean: 
	$(RM) tute2
