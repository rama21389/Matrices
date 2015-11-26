/* matriz - crea una matriz


*/

#include <iostream>
#include <math.h>


int main () {
	
	
	using namespace std ;
	
	
	int m [] [3] = { {1,2,3} , {4,5,6} , { 7,8,9} , {10,11,12}};
	
	for (int i=0; i<4 ; i++) {
		
		for (int j=0;  j<3; j++)
		
		cout<< m [i] [j] << "\t";
		cout<< endl;
		
	}
	
	
	int size; 
	cin>> size;
	int *array= new int[size];
	delete [] array;
	return 0;
}
