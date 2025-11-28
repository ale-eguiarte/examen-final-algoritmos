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
  
  string parteFinal = clave4.substr(clave4.length() - rot);
  string parteInicial = clave4.substr(0, clave4.length() - rot);
  
  string respuesta = parteFinal + parteInicial;

  //las acomoda con espacio
  string parte1 = descifrado.substr(1, 3);
  string parte2 = descifrado.substr(4);

  cout << parte1 << " " << parte2 << endl; //y ahora no tiene la s

  
}
