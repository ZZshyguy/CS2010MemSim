#include "memory.h"

/*
Zachary Lapointe
CS2010
Memory simulator using a class
*/


int main(void) {
	memory m1(20);
	for ( int i=0; i < 10; i++) m1.store(i,i);
	m1.dump();
	m1.dump(2,10);
	m1.copy(5,5,12); 
	m1.dump();
	m1.copy(12,5,15);
	m1.dump();
	m1.copy(12,5,18); //Copy will be out of bounds
	m1.dump();
	cout << "Value at location 5 = " << m1.retrieve(5) << endl;
	m1.store(10,234);
	m1.dump(10,15);
	cout << "Value at location 10 = " << m1.retrieve(10) << endl;
}
