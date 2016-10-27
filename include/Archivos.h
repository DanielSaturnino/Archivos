#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
class Archivos
{
public:
	int op;
	std::string nombre;
	void Menu();	
	void crear();
	void leer(std::string ruta);
	void Escribir(std::string nombre);
	void Borrar(std::string ruta);
	//~Archivos();

};