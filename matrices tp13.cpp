/* matrices tp 13 crea matriz de acuerdo a lo que quieras.

*/


#include <iostream>





 int main (){
 	
 	using namespace std;
 	
 	
 	int filas ;
 	int columnas; 
 	int valor;
 	
 	cout<< "ingrese cantidad de filas" << endl;
 	cin>> filas;
 	cout << "ingrese cantidad de columnas" << endl;
 	cin>> columnas;
 	
 	int matriz [filas] [columnas] ;
 	 
 	
 	
 	for (int i=0; i<filas; i++) {
 		
 		
 		for (int j=0; j<columnas; j++) {
 			
 			cout << endl <<" posicion [" << i << "][" << j << "]" << endl ; 
 			cout << "ingrese un valor : " ;
 			cin>> valor;
 			matriz [i] [j] = valor;
 			
 			
		 }
 		
	 }
 	
 	
 	
 }
