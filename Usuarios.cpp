#include "Usuarios.h"

Usuarios::Usuarios(string n,string u,string c){
	nombre=n;
	usuario=u;
	contra=c;
}

string Usuarios::getNombre(){
	return nombre;
}

string Usuarios::getUsuario(){
	return usuario;
}

string Usuarios::getContra(){
	return contra;
}

vector<Usuarios> Usuarios::getSeguidos(){
	return seguidos;
}

vector<Post> Usuarios::getPost(){
	return posts;
}

void Usuarios::setPost(Post h){
	posts.push_back(h);
	
}
void Usuarios::setSeguidos(Usuarios h){
	seguidos.push_back(h);
	
}
