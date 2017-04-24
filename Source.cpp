#include <stdio.h>
#include <math.h>
#include <random>

void  populate(int * theArray) {
	int m = sizeof(theArray) / sizeof(int);
	for (int i = 0; i < m; i++) {
		theArray[i] = rand() % 100;
	}
}


int main(void) {

	const int N = 5000;
	//define array:
	int myArray[N];

	//populate array with random numbers 0..99:
	for (int i = 0; i < N; i++) {
		myArray[i] =  rand() % 100;
		//printf("%i\n", myArray[i]);
	}

	//
	

	getchar();
}
