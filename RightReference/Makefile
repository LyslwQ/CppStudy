MUDUO_DIRECTORY ?= $(HOME)/item/muduo/build/release-install
#MUDUO_DIRECTORY ?= $(HOME)/build/install
MUDUO_INCLUDE = $(MUDUO_DIRECTORY)/include
#MUDUO_LIBRARY = $(MUDUO_DIRECTORY)/lib
SRC = .

CXXFLAGS =  -g -O0 -Wall -Wextra -Werror \
	   -Wconversion -Wno-unused-parameter \
	   -Wold-style-cast -Woverloaded-virtual \
	   -Wpointer-arith -Wshadow -Wwrite-strings \
	   -march=native -rdynamic \
	   -I$(MUDUO_INCLUDE)

LDFLAGS =   -lmuduo_net -lmuduo_base -lpthread -lrt

all: main
clean:
	rm -f main core

main: $(SRC)/main.cpp
	g++  $(CXXFLAGS) -o $@ $^ $(LDFLAGS) 

.PHONY: all clean
