# include "Archivos.h"
using namespace std;
void Archivos::Menu()
{
	cout<<"HOLA BIENVENIDO QUE DESEAS HACER"<<endl;
	do{
	cout<<"\n 1 Escribir  \n 2 Leer \n 3 Crear \n 4 Borrar \n 5 Salir"<<endl;
	cout<<"Elija: "<<endl;
	cin>> op;
	switch (op)
	{
		case 1:
		cout<<"Escribe el nombre del archivo: "<<endl;
		cin<<nombre;
		escribir(nombre);

		break;
		case 2:
		
		break;
		case 3:
	
		break;
		case 4:
		
		break;
		}
	}while(op!=5);
}
void Archivos::Escribir(string nombre)
{
	ofstream archivo;
	ofstream.open(nombre);
	cout<<fstream a(nombre,fstream::in)<<endl;
	fstream a(nombre,fstream::app);
}