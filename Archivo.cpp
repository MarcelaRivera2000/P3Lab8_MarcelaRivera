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
		outputFile <<"|"<<usuario.getPost()[i].getTitulo()<<","<<usuario.getPost()[i].getContenido()<<","<<usuario.getPost()[i].getLikes()<<","<<usuario.getPost()[i].getDislikes()<<",";
		if(i==usuario.getPost().size()-1){
			outputFile <<"|<";
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
	string text,aux1="",aux2="",aux3="",uax1="",uax2="",uax5="";
	int uax3,uax4,cont=0,cont2=0,cont3=0,cont4=0;
	Usuarios e;
	while(!archivo.eof()){
		getline(archivo,text);
		for(int i=0;i<text.size();i++){
		if((char)text[i]=='<'){
		cont4++;
		}
		if(con4==1){
			aux.push_back(e);
			aux1="";
		aux2="";
		aux3="";
		uax1="";
		uax2="";
		uax5="";
	 	uax3=0;
		 uax4=0;
		 cont=0;
		 cont2=0;
	 	cont3=0;
	 	cont4=0;
	 
		}
		if(cont<=2){
			if((char)text[i]==';'){
				cont=cont+1;
				ii=i;
				if(cont==3){
					break;
				}
			}
			if(cont==0){
				aux1+=(char)text[i];
			}else if (cont==1){
				aux2+=(char)text[i];
				cont++;
			}else if (cont==2){
				aux3+=(char)text[i];
			
			}	
		}else{
		 e= Usuarios(aux1,aux2,aux3);		
			
			if((char)text[i]=='|'){
				cont2++;
				if(cont2 ==1){
					cont2=0;
					 uax1="";
					 uax2="";
					 uax3=0;
					 uax4=0;
					 cont3=0;
					 uax5="";
				}
			}
			if((char)text[i]==','){
				cont3++;
			}
			if(cont3==0){
			uax1+=(char)text[i];	
			}else if (cont3==1){
					uax2+=(char)text[i];	
			}else if (cont3==2){
				uax3+=(int)text[i];
			}else if (cont3==3){
				uax4+=(int)text[i];
			}else if (cont3==4){
				uax5+=(char)text[i];
			}else if (cont3==5){
				e.setPost(Post(uax1,uax2,uax5,uax3,uax4));
			}
			
				
		}
		
		
		}//end for
		cout<<endl<<"aqui: "<<aux3<<endl;
		
 
	}
	archivo.close();
	return aux;
}















