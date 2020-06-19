#ifndef COMENTARIOS_H
#define COMENTARIOS_H
#include <string>

using namespace std; 

class Comentarios{
	public:
		Comentarios(string ,string );
		string getUsuario();
		string getContenido();
	protected:
		string usuario,contenido;
};

#endif



