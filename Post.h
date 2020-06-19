#ifndef POST_H
#define POST_H
#include <string>
#include <vector>
#include "Comentarios.h"

using namespace std; 

class Post{
	public: 
		Post(string,string);
		string getTitulo();
		string getContenido();
		int getLikes();
		int getDislikes();
		void setLikes();
		void setDislikes();
		
	protected:
		string titulo,contenido;
		int likes,dislikes;
		vector<Comentarios> coments;
};


#endif
