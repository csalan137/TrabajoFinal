#include<iostream>
#include<string>
using namespace std;

int main (){
	int opc = 0;
	string nombreUsuario = "A";
	bool salida = 0;
	do{
		cout<<"\n\t\tParque Barranca de Huentita"<<endl<<endl;
		cout<<"\t1. iniciar\n\t2. instrucciones\n\t3. opciones\n\t4. creditos\n\t5. salir del juego"<<endl;
		cout<<"\nIngrese la opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"Dame tu nombre: "<<endl;
				cin.ignore();
				getline(cin, nombreUsuario);
				cout<<"Empieza la historia....";
				break;
			case 2:
				cout<<"Solo se utilizara numeros para la interaccion\nde la historia, del 1 al 5 en el menu y\ndel 1 al 4 en el juego";
				break;
			case 3:
				cout<<"Sonido, idioma, graficos y modos de control\nse apreciaran en la version terminada";
				break;
			case 4:
				cout<<"Historia escrita y elaborada por Alan Avan Perez,\nestudiante de la carrera de Ingenieria en\nComputacion de primer semestre";
				break;
			case 5:
				cout<<"\nSeguro que desea salir del programa?"<<endl;
				cout<<"\n0. si\n1. no"<<endl;
				cout<<"\nIngrese la opcion: ";
				cin>>salida;
				system("cls");
				break;
			default:cout<<"Opcion invalida";break;
		}
	}while (salida == 1);

return 0;	
}

