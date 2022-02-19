#include "Persona.cpp"
#include <iostream>

using namespace std;

class Propietario : Persona{
	
	private : string nit;
	double cui;
	
	public: 
	Propietario (){
	}
	Propietario (string nom, string ap, string dir, string fec,int tel, string n, double c) : Persona ( nom, ap, dir, fec,tel){
		nit=n;
		cui=c;
	}
	
	//modificar
	void setNit(string n){nit =n;	}
	void setNombres(string nom){nombres =nom;	}
	void setApellidos(string ap){nombres =ap;	}
	void setCui(double c){cui =c;	}
	void setDireccion(string dir){direccion =dir;	}
	void setTelefono(int tel){telefono =tel;	}
	void setFechanac(string fec){fechanac =fec;	}
	
	//mostrar
	string getNit(){return nit;	}
	string getNombres(){return nombres;	}
	string getApellidos(){return apellidos;	}
	double getCui(){return cui;	}
	string getDireccion(){return direccion;	}
	int getTelefono(){return telefono;	}
	string getFechanac(){return fechanac;	}
	
	//metodo mos
	void mostrar(){
		cout<<"_____________________________________"<< endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<< cui<<","<< direccion<<","<< telefono<<","<< fechanac<<endl;
	}
	
	void agregar(){
		int sel;
		Propietario propietario;
		string n, nom, ap, dir, fec;
		double c;
		int tel;
		cout<<"DESEA AGREGAR NUEVO USUARIO (1. si 2. no:  ";
		cin>>sel;
		
		if (sel==1){
		
		cout<<"NIT: ";
		cin>>n;
		propietario.setNit(n);	
		cout<<"NOMBRE: ";
		cin>>nom;
		propietario.setNombres(nom);	
		cout<<"APELLIDOS: ";
		cin>>ap;
		propietario.setApellidos(ap);	
		cout<<"CUI: ";
		cin>>c;
		propietario.setCui(c);
		cout<<"DIRECCION: ";
		cin>>dir;
		propietario.setDireccion(dir);
		cout<<"TELEFONO: ";
		cin>>tel;
		propietario.setTelefono(tel);
		cout<<"FECHA DE NACIMIENTO: ";
		cin>>fec;
		propietario.setFechanac(fec);
		
				
		}
		
	}
};

