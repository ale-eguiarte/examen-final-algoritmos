#include <iostream>
#include <string>
using namespace std;

int main() {
  string clave4 = "secretoslos ";
  int rot = 4; // número de lugares que se rota
  
  rot = rot % clave4.length(); // si la rotación es mayor a la clave, evita que de vueltas y solo mueve los lugares necesarios
  
  string parteFinal = clave4.substr(clave4.length() - rot); // “los” - la parte que rota
  string parteInicial = clave4.substr(0, clave4.length() - rot);  // “secretos” - la parte restante
  string descifrado = parteFinal + parteInicial; //junta ambas partes
  
  cout << descifrado<< endl;

}
