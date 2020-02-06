
#include <iostream>

/*
HEAP is the memory upper allocated 
STACK is the memory downer allocated
*/

int main(){


	int example[5]; /* Allocation in the STACK and it wold be destroyed when 
						the code reaches the end of the scope: the curly bracets of main
					*/

	int* another = new int [5]; /* Alocation in the HEAP, it will be destroyed until the 
									program ends or we destroy it directly
								*/
	delete[] another; /* I need the square brackets to delete it becase it was declared with 
						square brackets
						*/

	return 0;
}