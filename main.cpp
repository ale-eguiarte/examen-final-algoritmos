#include <math.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  string clave4 = "secretoslos";
  int rot = 4;
  
  rot = rot % clave4.length();
  
  string parteFinal = clave4.substr(clave4.length() - rot); //te da "slos"
  string parteInicial = clave4.substr(0, clave4.length() - rot); //te da "secreto"
  string descifrado = parteFinal + parteInicial; //"slossecreto"
  
  //las acomoda con espacio
  string parte1 = parteFinal.substr(1);          //”los”, el substr quita el s antes de los 
  string parte2 = parteInicial + parteFinal[0]; //”secreto” agrega la s que faltaba, parteFinal[0] es ‘s’, s esta en posición 0 de descifrado
  
  cout << parte1 << " " << parte2 << endl;

}
