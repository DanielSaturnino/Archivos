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
	void Crear(std::string ruta);
	void leer(std::string ruta);
	void Escribir(std::string ruta);
	void Borrar(std::string ruta);
	//~Archivos();

};