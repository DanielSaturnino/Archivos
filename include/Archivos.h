# include <iostream>
# include <fstream>
# include <string>
class Archivos
{
public:
	int op;
	std::string nombre;
	void Menu();	
	void crear();
	void leer();
	void escribir(std::string nombre);
	void borrar();
	//~Archivos();

};