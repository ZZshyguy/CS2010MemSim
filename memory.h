#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class memory {
private:
	int *mem;
	int size;
public:
	memory(int s = 100);
	void store( int i, int value);
	int retrieve(int i);
	void copy(int source, int size, int dest);
	void dump(int start = 0, int size = -1);  // if size == -1 dump all memory
};

#endif
