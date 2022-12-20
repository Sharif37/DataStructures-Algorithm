
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

	// Providing a seed value
	//srand((unsigned) time(NULL));

	// Loop to get 5 random numbers
	for(int i=1; i<=1000; i++){

		// Retrieve a random number between 100 and 200
		// Offset = 100
		// Range = 101
		double random = ((double)rand()/rand());

		// Print the random number
		printf("%.10f  ",random) ;
	}

	return 1;
}
