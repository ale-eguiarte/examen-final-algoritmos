#include <iostream>
#include <string>
using namespace std;

int main() {
  string clave4 = "secretoslos ";
  int rot = 4;
  
  rot = rot % clave4.length();
  
  string parteFinal = clave4.substr(clave4.length() - rot);
  string parteInicial = clave4.substr(0, clave4.length() - rot); 
  string descifrado = parteFinal + parteInicial;
  
  cout << descifrado<< endl;

}
