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
void Red();
int posi;
void menu();

int main(int argc, char** argv) {
	while(true){
		menu();
	}
	return 0;
}

void menu(){
	int op;
	cout<<"--------- LABORATORIO # 8 ---------"<<endl<<"1.Registrarse"<<endl<<"2.Ingresar"<<endl<<"3.Salir"<<endl<<":";
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
	cout<<"--------- BIENVENIDO ---------"<<endl<<"Ingrese su usuario"<<endl<<":";
	cin>>usuario;
	cout<<"Ingrese su contrasena"<<endl<<":";
	cin>>contra;
	int cont=0;
	for(int i=0; i<lista.size(); i++){
		if(lista[i].getUsuario()==usuario &&lista[i].getContra()==contra){
			
			posi=i;
			for(int j=0;j<lista[i].getPost().size();j++){
				cout<<"--------- "<<j<<" ---------"<<endl;
					lista[i].getPost()[j].Publicar();
			}
			Red();
			
		}else{
			cont++;
		}
	}
	if(cont==lista.size()){
		cout<<"Usuario/Contrasena Incorrecto... "<<endl;
	}
	
}

void Red(){
	while(true){
	int op;
	cout<<"--------- MENU ---------"<<endl<<"1.Crear Post"<<endl<<"2.Comentar Post"<<endl<<"3.Dar like"<<endl<<"4.Dar Dislike "<<endl<<"5.Seguir Usuario"<<endl<<"6.Dejar de seguir a un usuario"<<endl;
	cin>>op;
	switch(op){
		case 1:{
			cout<<"--------- NUEVO POST ---------"<<endl;
			string titulo,contenido;
			cout<<"Ingrese el titulo"<<endl<<":";
			cin>>titulo;
			cout<<"Ingrese el contenido"<<endl<<":";
			cin>>contenido;
			lista[posi].setPost(Post(titulo,contenido,lista[posi].getUsuario()));
			
			
			
			break;
		}
		case 2:{
			int posi2,aux;
			for(int i=0; i<lista.size(); i++){	
				for(int j=0;j<lista[i].getPost().size();j++){
					cout<<endl<<"--------- "<<j<<" ---------"<<endl;
					lista[i].getPost()[j].Publicar();
					
					for(int k=0;k<lista[i].getPost()[j].getComents().size();k++){
						cout<<"-----------------------"<<endl;
						cout<<"Usuario: "<<lista[i].getPost()[j].getComents()[k].getUsuario()<<endl<<": "<<lista[i].getPost()[j].getComents()[k].getContenido();
					}
					cout<<"----------------------"<<endl;
				}
			}
			cout<<"Ingrese la posicion del post "<<endl<<":";
			cin>>posi2;
			for(int i=0; i<lista.size(); i++){
				aux=i;
				for(int j=0;j<lista[i].getPost().size();j++){
					if(j==posi2){
						break;
					}
				}	
			}
			cout<<"Ingrese su comentario "<<endl<<":";
			string coment;
			cin>>coment;
			lista[aux].getPost()[posi2].setComents(Comentarios(lista[posi].getUsuario(),coment));
			
			
			break;
		}
		case 3:{
			int posi2,aux;
			for(int i=0; i<lista.size(); i++){	
				for(int j=0;j<lista[i].getPost().size();j++){
					cout<<endl<<"--------- "<<j<<" ---------"<<endl;
					lista[i].getPost()[j].Publicar();
				}
			}
			cout<<"Ingrese la posicion del post "<<endl<<":";
			cin>>posi2;
			for(int i=0; i<lista.size(); i++){
				aux=i;
				for(int j=0;j<lista[i].getPost().size();j++){
					if(j==posi2){
						break;
					}
				}	
			}
			lista[aux].getPost()[posi2].setLikes();
			break;
		}
		case 4:{
			int posi2,aux;
			for(int i=0; i<lista.size(); i++){	
				for(int j=0;j<lista[i].getPost().size();j++){
					cout<<"--------- "<<j<<" ---------"<<endl;
					lista[i].getPost()[j].Publicar();
				}
			}
			cout<<"Ingrese la posicion del post "<<endl<<":";
			cin>>posi2;
			for(int i=0; i<lista.size(); i++){
				aux=i;
				for(int j=0;j<lista[i].getPost().size();j++){
					if(j==posi2){
						break;
					}
				}	
			}
			lista[aux].getPost()[posi2].setDislikes();
			break;
		}
		case 5:{
			cout<<"--------- USUARIOS ---------"<<endl;
			for(int i=0; i<lista.size(); i++){
				cout<<i<<". "<<lista[i].getUsuario()<<endl;
			}
			int posi2;
			cout<<"Ingrese la posicion del usuario "<<endl<<":";
			cin>>posi2;
			lista[posi].setSeguidos(lista[posi2]);
			break;
		}
		case 6:{
			cout<<"--------- USUARIOS QUE SIGUES ---------"<<endl;
			for(int i=0; i<lista[posi].getSeguidos().size(); i++){
				cout<<i<<". "<<lista[posi].getSeguidos()[i].getUsuario()<<endl;
			}
			int posi2;
			cout<<"Ingrese la posicion del usuario "<<endl<<":";
			cin>>posi2;
			lista[posi].getSeguidos().erase(lista[posi].getSeguidos().begin() + posi2);
			break;
		}
	}	
	}
}









































