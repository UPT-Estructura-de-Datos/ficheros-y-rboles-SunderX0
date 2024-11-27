#include <fstream>
 // Biblioteca para el manejo de ficheros
#include <iostream>
 using namespace std; 
 // Biblioteca para la entrada-salida eständar
  typedef char TCadena [30]; 
  int main(){
  int i; 
  	float r
	TCadena cad;
	 ifstream fichin("EJEMPLOS.TXT");
	  // declaracion y apertura del fichero
	   if (!fichin) {
	   
	   cout << "\n Incapaz de crear o abrir el fichero ";
	    } else { 
		fichin >> 1 
		// Observese La Lectura adelantada!!! 
		while (!fichin.eof()){
		 cout <<i<<""; // Lectura de valores en el fichero
		fichin >> r
		 cout <<r<<" "; // Lectura de valores en el fichero 
		 fichin >> cad; 
		 cout << cad << "\n";
		  // Lectura de valores en el fichero
		   fichin >> i; 
		   }
		    fichin.close(); 
			}
			}// Fin del main
