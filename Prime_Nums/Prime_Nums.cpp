#include <iostream>
#include "Prime_Nums.h"
/* The function for printing array elements to the console */
void Print_Array(unsigned int array_[], const unsigned short size_of_array ) {
	for (unsigned short i = 0; i < size_of_array; i++) {
		std::cout << array_[i] << std::endl;
	}
}
/* The function of writing the first N prime numbers to the passed array */
void Prime_Nums(unsigned int array_[], const unsigned short N) {
	if (N > 0) {
		array_[0] = 2; //Initial data, first prime number = 2
		int k = 0; 
		/* k is counter of elements in the array from 0(when array contains only "2") 
				   to N - 1 (when array contains N elements) */
		/* i is resource for writing to the array
		By incrementing the i, we check whether it is prime
		The check condition is that the number i is indivisible 
		by each element that has already been written to the array
		*/
		for (unsigned int i = 2; k <= N - 2; ++i) {
			for (int m = 0; m <= k; m++) {
				if (i % array_[m] == 0) {
					break;
				}
				else if (m == k) {
					array_[++k] = i;
					break;
				}
			}
		}
	}
	else throw std::exception("N must be greater than zero!");
}
