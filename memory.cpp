#include "memory.h"

memory::memory(int s){
//Memory constructor, array of ints, default size is 100, fills with zeros
	size = s; 
	mem = new int[ size ];
	for(int i = 0; i < size; i++) mem[i] = 0;
}


void memory::store(int i, int value){
//Store an integer at any memory location
	mem[i] = value;
}


int memory::retrieve(int i){
//Retrieve and integer form any memory location
	return mem[i];
}


void memory::copy(int source, int size, int dest){
//Copy from one part of memory to another (source+size to dest). Overlap allowed, out of bounds not allowed, nothing
//is copied if this occurs
	if(!(dest+size > this->size)){
		int *buffer = new int[size]; //Using a temporary array to copy
		for(int i=0; i<size; i++){
			buffer[i] = mem[source+i];
		}
		for(int i=0; i<size; i++){
			mem[dest+i] = buffer[i];
		}
		delete [] buffer;
	}
	else cout<< "Out of bounds, not copied, change size or destination" << endl;	
}


void memory::dump(int start, int size){
//Dump memory locations from start and ending at size. If size == -1 or no parameters, dump everything
	cout << "MEMORY CONTENTS: " << endl;
	if(size == -1){
		for(int i = 0; i < this->size; i++) cout<< "mem[" << i << "]" << " = " << mem[i] << endl;
	}
	else{
		for(int i = start; i<size; i++) cout<< "mem[" << i << "]" << " = " << mem[i] << endl;	
	}
	cout << endl;
}


