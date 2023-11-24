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
		cout<<"\n\tIngrese la opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"\n\tIngresa tu nombre: "<<endl;
				cin.ignore();
				getline(cin, nombreUsuario);
				system("cls");
				cout<<"\n\n\tParque Barranca de Huentita"<<endl;
				cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
				cout<<"\n\tPerro: Ladridos y sonidos de rasguños en las paredes y la puerta!"<<endl;
				cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				system("pause");
				cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus uñas rosando y rasguñando la puerta de madera de la cabaña."<<endl;
				cout<<"\n\tPersona masculina: Shhh!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				system("pause");
				cout<<"\n\tEros: Ladridos mas fuertes y agresivos"<<endl;
				cout<<"\n\tPersona masculina2: ¡Callen a ese wuey!"<<endl;
				cout<<"\n\tEros: Rascando y chillando"<<endl<<endl;
				cout<<nombreUsuario<<": Habro los ojos y decido levantarme para averiguar que quiere Eros"<<endl;
				cout<<"\n\tMe pongo al pie de la cama y decido..."<<endl;
				system("pause");
				
				system("cls");
				break;
			case 2:
				system("cls");
				cout<<"\n\tSolo se utilizan numeros para la interaccion de la historia,\n\tdel 1 al 5 en el menu y del 1 al 4 en el juego";
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

