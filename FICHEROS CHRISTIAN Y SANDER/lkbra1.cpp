#include <iostream> 
#include <fstream> 
using namespace std;

 int main() {
 
 	ofstream archivo; 
	 archivo.open("datos.txt");
	
	
 	archivo << "Primera linea de texto" << endl; archivo << "Segunda linea de texto" << endl;
   	archivo << "Bltima linea de texto" << endl; archivo.close();
 	
    return 0;
    
    
}
