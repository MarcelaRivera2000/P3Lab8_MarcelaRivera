#include "Post.h"
#include <iostream>
using namespace std; 
using std::cin;
using std::endl;
using std::cout;

Post::Post(string t,string c,string u,int i,int j){
	titulo=t;
	contenido=c;
	usuario=u;
	likes=i;
	dislikes=j;
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

	for(int i=0;i<coments.size();i++){
		cout<<"-----------------------"<<endl;
		cout<<"Usuario: "<<coments[i].getUsuario()<<endl<<"coment: "<<coments[i].getContenido();
	}
	cout<<endl;
	cout<<"----------------------"<<endl;
}

