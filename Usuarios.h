#ifndef USUARIOS_H
#define USUARIOS_H
#include <string>
#include <vector>
#include "Post.h"

using namespace std; 

class Usuarios{
	public:
		Usuarios(string,string ,string);
		string getNombre();
		string getUsuario();
		string getContra();
		vector<Usuarios> getSeguidos();
		vector<Post> getPost();

		
	protected:
		string nombre,usuario,contra;
		vector <Usuarios> seguidos;
		vector <Post> posts;
	
};


#endif
