/* matrices tp 13 crea una matriz manualmente

*/


#include <iostream>


int main (){
 	
 	using namespace std;
 	
 	
 	int filas = 0;
 	int columnas = 0;
 	int valor;
 	
 	cout<< "ingrese cantidad de filas" << endl;
 	cin>> filas;
 	cout << "ingrese cantidad de columnas" << endl;
 	cin>> columnas;
 	
 	int matriz [filas] [columnas] ;
 	int sumaf[filas];
 	int sumac[columnas];
 	
 	
 	for (int i=0; i< filas; i++){
 		
 		sumaf[i]=0;
	 }
 	 
 	 
 	for (int j=0;j<columnas;j++){
 		
 		sumac[j] = 0;
	 } 
 	
 	
 	for (int i=0; i<filas; i++) {
 		
 		
 		for (int j=0; j<columnas; j++) {
 			
 			cout << endl <<" posicion [" << i << "][" << j << "]" << endl ; 
 			cout << "ingrese un valor : " ;
 			cin>> valor;
 			matriz [i] [j] = valor;
 			sumaf[i]= sumaf[i] + matriz [i] [j];
 			sumac[j] = sumac[j] + matriz [i] [j];
 			
		 }
 		
	 }
 	
 	for (int i=0; i<filas; i++) {
 		
 		
 		for (int j=0; j<columnas; j++){
		 
 	          
			    cout<< "       " << matriz [i] [j]<< "      " ;
		}
		cout << endl;
			
    }
		
	
	for (int i=0; i< filas ; i++){
		
		cout<< "la sumas es : " << sumaf[i]<< endl;
		
	}	
    
 	for (int j=0; j< columnas ; j++){
		
		cout<< "la sumas es : " << sumac[j] << endl;
	}
 	
 	
 }
  
