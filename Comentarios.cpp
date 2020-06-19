#include "Comentarios.h"

Comentarios::Comentarios(string u,string c){
	usuario=u;
	contenido=c;
	
}

string Comentarios::getUsuario(){
	return usuario;
}

string Comentarios::getContenido(){
	return contenido;
}
