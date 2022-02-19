#include <iostream>
using namespace std;

class Persona{
	
	protected : string nombres, apellidos, direccion, fechanac;
				int telefono;
	
	protected :
				Persona	(){
				}		
				Persona	(string nom,string ap,string dir, string fec, int tel){
					nombres=nom;
					apellidos=ap;
					direccion=dir;
					telefono=tel;
					fechanac=fec;
				}		
				
	void agregar();
	void mostrar();
	
};
