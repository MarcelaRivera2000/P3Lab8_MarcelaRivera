#include <iostream>
#include <vector>
#include "Usuarios.h"

using namespace std; 
using std::cin;
using std::endl;
using std::cout;
void Regitrarse();
void Ingresar();
vector<Usuarios> lista;

int main(int argc, char** argv) {
	while(true){
	int op;
	cout<<"--------- LABORATORIO # 8 ---------"<<endl<<"1.Registrarse"<<endl<<"2.Ingresar"<<endl<<"3#Salir"<<endl<<":";
	cin>>op;
	switch(op){
		case 1:{
			Regitrarse();
			break;
		}
		case 2:{
			Ingresar();
			break;
		}
		case 3:{
			exit (EXIT_FAILURE);
			break;
		}
	}	
	}
	return 0;
}

void Regitrarse(){
	string nombre,usuario,contra;
	cout<<"--------- REGISTRO ---------"<<endl<<"Ingrese su nombre"<<endl<<":";
	cin>>nombre;
	cout<<"Ingrese su usuario"<<endl<<":";
	cin>>usuario;
	cout<<"Ingrese su contrasena"<<endl<<":";
	cin>>contra;
	lista.push_back(Usuarios(nombre,usuario,contra));
	cout<<"Se registro exitosamente... "<<endl<<endl;
}

void Ingresar(){
	string usuario,contra;
	cout<<"--------- REGISTRO ---------"<<endl<<"Ingrese su usuario"<<endl<<":";
	cin>>usuario;
	cout<<"Ingrese su contrasena"<<endl<<":";
	cin>>contra;
	int cont=0;
	for(int i=0; i<lista.size(); i++){
		if(lista[i].getUsuario()==usuario &&lista[i].getContra()==contra){
			
			
		}else{
			cont++;
		}
	}
	if(cont==lista.size()){
		cout<<"Usuario/Contrasena Incorrecto... "<<endl;
	}
	
}









































