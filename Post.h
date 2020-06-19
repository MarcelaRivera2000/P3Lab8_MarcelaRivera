#ifndef POST_H
#define POST_H
#include <string>
#include <vector>
#include "Comentarios.h"

using namespace std; 

class Post{
	public: 
		Post(string,string,string,int, int);
		string getTitulo();
		string getContenido();
		string getUsuario();
		int getLikes();
		int getDislikes();
		void setLikes();
		void setDislikes();
		vector<Comentarios> getComents();
		void Publicar();
		void setComents(Comentarios);
		
	protected:
		string titulo,contenido,usuario;
		int likes,dislikes;
		vector<Comentarios> coments;
		
};


#endif
