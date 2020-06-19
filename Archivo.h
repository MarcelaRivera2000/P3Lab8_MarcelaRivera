#ifndef ARCHIVO_H
#define ARCHIVO_H
#include "Usuarios.h"
#include <string>
#include <string.h>
using std::string;
#include <fstream>
#include <vector>
using std::ofstream;


class Archivo{
	public:
		void Escribir(Usuarios);
		void leer();
	protected:
		string fileName="Usuarios.txt";
		ofstream outputFile;
		ifstream archivo;
		
};

#endif
