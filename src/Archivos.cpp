# include "Archivos.h"
using namespace std;
void Archivos::Menu()
{
	std::string nombre;
	cout<<"HOLA BIENVENIDO QUE DESEAS HACER"<<endl;
	do{
	system("clear");
	cout<<"\n 1 Escribir  \n 2 Leer \n 3 Crear \n 4 Borrar \n 5 Salir"<<endl;
	cout<<"Elija: "<<endl;
	cin>> op;
	switch (op)
	{
		case 1:
		cout<<"Escribe el nombre del archivo: "<<endl;
		cin>>nombre;
		Escribir(nombre);

		break;
		case 2:
		std::cout<<"Dame la ruta de del archivo: "<<std::endl;
		cin>>nombre;
		leer(nombre);
		system("pause");
		break;
		case 3:
		std::cout<<"Dame la ruta de del archivo: "<<std::endl;
		cin>>nombre;
		Crear(nombre);
		system("pause");
		break;
		case 4:
		std::cout<<"Dame la ruta de del archivo: "<<std::endl;
		cin>>nombre;
		Borrar(nombre);
		system("pause");
		break;
		}
	}while(op!=5);
}
void Archivos::Escribir(std::string ruta)
{
	std::ifstream archivo;
	archivo.open(ruta.c_str());
	//cout<<fstream a(nombre.c_str(),fstream::in)<<endl;
	std::string line;
	while(archivo.eof())
	{
		archivo>> line;
		std::cout<<line<<std::endl;
	}
	archivo.close();
	ofstream a(nombre.c_str(),fstream::app);
	std::string line2;
	a<<line2<<endl;
	a.close();

}
void Archivos::leer(std::string ruta){
	std::ifstream lee(ruta.c_str());
	std::string line;
	while(!lee.eof()){
		lee >> line;
		std::cout<<line<<std::endl;
	}
	lee.close();
}
void Archivos::Borrar(std::string ruta){
std::string comando;
comando = "rm " + ruta;
system(comando.c_str());
}

void  Archivos::Crear(std::string ruta)
{
	 std::string com;
	 com = "touch" + ruta;
	 system(com.c_str());
	 
}