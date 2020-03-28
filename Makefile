cc = g++
CFLAGS = -c -Wall

ifeq '$(findstring ;,$(PATH))' ';'
    detected_OS := Windows
else
    detected_OS := $(shell uname 2>/dev/null || echo Unknown)
    detected_OS := $(patsubst CYGWIN%,Cygwin,$(detected_OS))
    detected_OS := $(patsubst MSYS%,MSYS,$(detected_OS))
    detected_OS := $(patsubst MINGW%,MSYS,$(detected_OS))
endif

all: calc
calc: app.cpp
	$(cc) $(CLFLAGS) --std=c++17 app.cpp -o calc	
install:
ifeq ($(detected_OS),Windows)
	COPY calc C:\Windows\System32
else
	sudo cp calc /usr/local/bin
endif	
clean:
ifeq ($(detected_OS),Windows)
	DEL app.o calc
else
	rm -rf app.o calc
endif