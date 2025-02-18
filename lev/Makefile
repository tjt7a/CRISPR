CC=g++
FLAGS=-O3 --std=c++11 -pthread -DDEBUG=false -g
VASIM=../lib/VASim
MNRL=$(VASIM)/libs/mnrl/C++
LIBMNRL=$(MNRL)/libmnrl.a
PUGI=$(VASIM)/libs/pugixml/src
LIBVASIM=$(VASIM)/libvasim.a
IDIRS=-I $(VASIM)/include -I $(MNRL)/include -I $(PUGI)
TARGET=lev

all: lev.o
	$(CC) $(IDIRS) $(FLAGS) main.cpp $(LIBVASIM) $(LIBMNRL) $< -o lev

lev.o: levenshtein.cpp
	$(CC) $(IDIRS) $(FLAGS) -c -o $@ $<

