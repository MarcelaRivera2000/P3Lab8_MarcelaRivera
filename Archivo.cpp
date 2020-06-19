#include "Archivo.h"
#include <iostream>

using namespace std; 
using std::cout;

void Archivo::Escribir(Usuarios usuario){
	outputFile.open(fileName, ios::out);
	if(outputFile.fail()){
		cout<<"No se pudo abrir el archivo...";
		exit(1);
	}
	outputFile << usuario.getNombre()<<";" << usuario.getUsuario()<<";" << usuario.getContra()<<";";
	for(int i=0;i<usuario.getPost().size();i++){
		outputFile <<"|"<<usuario.getPost()[i].getTitulo()<<","<<usuario.getPost()[i].getContenido()<<","<<usuario.getPost()[i].getLikes()<<usuario.getPost()[i].getDislikes();
		if(i==usuario.getPost().size()-1){
			outputFile <<"|";
		}
	}  
	                      
	outputFile.close();
}

vector<Usuarios> Archivo::leer(){
	archivo.open(fileName,ios::in);
	if(archivo.fail()){
	cout<<"No se pudo abrir el archivo...";
	exit(1);
	}
	vector<Usuarios> aux;
	string text;
	while(!archivo.eof()){
		
		getline(archivo,text);
		cout<<text<<endl;
	}
	archivo.close();
	return aux;
}















