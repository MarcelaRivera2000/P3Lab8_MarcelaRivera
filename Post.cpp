#include "Post.h"
#include <iostream>
using namespace std; 
using std::cin;
using std::endl;
using std::cout;

Post::Post(string t,string c,string u){
	titulo=t;
	contenido=c;
	usuario=u;
	likes=0;
	dislikes=0;
}

string Post::getTitulo(){
	return titulo;
}

string Post::getUsuario(){
	return usuario;
}

string Post::getContenido(){
	return contenido;
}

int Post::getLikes(){
	return likes;
}

int Post::getDislikes(){
	return dislikes;
}

vector<Comentarios> Post::getComents(){
	return coments;
}

void Post::setComents(Comentarios h){
	coments.push_back(h);
	
}

void Post::setLikes(){
	likes++;
}

void Post::setDislikes(){
	dislikes++;
}


void Post::Publicar(){
	cout<<"Usuario: "<<usuario<<endl<<"Titulo: "<<titulo<<endl<<"Contenido: "<<contenido<<endl<<endl<<"likes: "<<likes<<"   dislikes:"<<dislikes<<endl;
	
}

