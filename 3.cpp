#include<iostream>
#include<string>
using namespace std;

int main (){
	int opc = 0;
	string nombreUsuario = "A";
	bool salida = 0;
	do{
		system("cls");
		cout<<"\n\t\tParque Barranca de Huentita"<<endl<<endl;
		cout<<"\t1. iniciar\n\t2. instrucciones\n\t3. opciones\n\t4. creditos\n\t5. salir del juego"<<endl;//empieza la primer interaccion del usuario
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
				cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
				cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				system("pause");
				system("cls");
				cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
				cout<<"\n\tPersona masculina: Shhh!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				system("pause");
				system("cls");
				cout<<"\n\tEros: Ladridos mas fuertes y agresivos"<<endl;
				cout<<"\n\tPersona masculina2: ?Callen a ese wuey!"<<endl;
				cout<<"\n\tEros: Rascando y chillando"<<endl<<endl;
				cout<<nombreUsuario<<": Habro los ojos y decido levantarme para averiguar que quiere Eros"<<endl;
				cout<<"\n\tMe pongo al pie de la cama y decido...\n"<<endl;
				system("pause");				
				system("cls");
				
				do{
					cout<<"\n\t1. Cerrar los ojos y volver a dormir\n\t2. Silenciar a mi perro?\n\t3. Buscar mis botas en el ropero?\n\t4. Salir del juego"<<endl;//empieza la segunda interaccion del usuario
					cout<<"\n\n\tIngrese la opcion: ";
					cin>>opc;
					system("cls");
					
					switch(opc){
						
						case 1:
							cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
							cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
							cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
							cout<<"\n\tPersona masculina: Shhh!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos mas fuertes y agresivos"<<endl;
							cout<<"\n\tPersona masculina2: ?Callen a ese wuey!"<<endl;
							cout<<"\n\tEros: Rascando y chillando"<<endl<<endl;
							cout<<nombreUsuario<<": Habro los ojos y decido levantarme para averiguar que quiere Eros"<<endl;
							cout<<"\n\tMe pongo al pie de la cama y decido...\n"<<endl;
							system("pause");				
							system("cls");
							break;
						
						case 2:
							cout<<nombreUsuario<<": Silencio Eros..."<<endl;
							system("pause");				
							system("cls");
							cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
							cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
							cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
							cout<<"\n\tPersona masculina: Shhh!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos mas fuertes y agresivos"<<endl;
							cout<<"\n\tPersona masculina2: ?Callen a ese wuey!"<<endl;
							cout<<"\n\tEros: Rascando y chillando"<<endl<<endl;
							cout<<nombreUsuario<<": Habro los ojos y decido levantarme para averiguar que quiere Eros"<<endl;
							cout<<"\n\tMe pongo al pie de la cama y decido...\n"<<endl;
							system("pause");				
							system("cls");
							break;
							
						case 3:
							cout<<"coming soon"<<endl;
							system("pause");				
							system("cls");
							break;
						
						case 4:
							cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
							cout<<"\t0. no\n\t1. si"<<endl;
							cout<<"\n\tIngrese la opcion: ";
							cin>>salida;
							system("cls");
							
					}
				}while (salida == 0);
				
			case 2:
				system("cls");
				cout<<"\n\tSolo se utilizan numeros para la interaccion de la historia,\n\tdel 1 al 5 en el menu y del 1 al 4 en el juego\n"<<endl;
				system("pause");
				break;
				
			case 3:
				system("cls");
				cout<<"\n\tSonido, idioma, graficos y modos de control\n\tse apreciaran en la version terminada\n"<<endl;
				system("pause");
				system("cls");
				break;
				
			case 4:
				system("cls");
				cout<<"\n\tHistoria escrita y elaborada por Alan Avan Perez,\n\testudiante de la carrera de Ingenieria en\n\tComputacion de primer semestre\n"<<endl;
				system("pause");
				system("cls");
				break;
				
			case 5:
				cout<<"\nSeguro que desea salir del programa?\n"<<endl;
				cout<<"0. no\n1. si"<<endl;
				cout<<"\nIngrese la opcion: ";
				cin>>salida;
				system("cls");
				break;
			default:
			cout<<"Opcion invalida";
			break;
		}
	}while (salida == 0);

return 0;	
}
