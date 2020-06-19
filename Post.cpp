#include "Post.h"

Post::Post(string t,string c){
	titulo=t;
	contenido=c;
	likes=0;
	dislikes=0;
}

string Post::getTitulo(){
	return titulo;
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

void Post::setLikes(){
	likes++;
}

void Post::setDislikes(){
	dislikes++;
}



