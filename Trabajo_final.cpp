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
		cout<<"1"<<endl;
		cout<<"\t1. iniciar\n\t2. instrucciones\n\t3. opciones\n\t4. creditos\n\t5. salir del juego"<<endl;//empieza la primer interaccion del usuario
		cout<<"\n\tIngrese la opcion: ";
		cin>>opc;
		
		switch(opc){
			
			case 1:
				cout<<"\n\tIngresa tu nombre: ";
				cin.ignore();
				getline(cin, nombreUsuario);
				system("cls");
				cout<<"\n\n\tParque Barranca de Huentita"<<endl;
				cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
				cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
				cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t...\n"<<endl;
				system("pause");
				system("cls");
				cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
				cout<<"\n\tPersona masculina: Shhh!"<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t...(momento de silencio)..."<<endl;
				cout<<"\n\t..."<<endl;
				cout<<"\n\t...\n"<<endl;
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
					cout<<"2"<<endl;
					cout<<"\n\t1. Cerrar los ojos y volver a dormir\n\t2. Silenciar a mi perro?\n\t3. Buscar mis botas en el ropero?\n\t4. Salir del juego"<<endl;//empieza la segunda interaccion del usuario
					cout<<"\n\tIngrese la opcion: ";
					cin>>opc;
					system("cls");
					
					switch(opc){
						
						case 1:
							cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
							cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
							cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...\n"<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
							cout<<"\n\tPersona masculina: Shhh!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...\n"<<endl;
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
							cout<<nombreUsuario<<": Silencio Eros...\n"<<endl;
							system("pause");				
							system("cls");
							cout<<"\n\tRuidos de perro rascando la puerta!"<<endl;
							cout<<"\n\tPerro: Ladridos y sonidos de rasgu?os en las paredes y la puerta!"<<endl;
							cout<<"\n\tPersona femenina: Callate Eros!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...\n"<<endl;
							system("pause");
							system("cls");
							cout<<"\n\tEros: Ladridos, chillidos y sonidos de sus u?as rosando y rasgu?ando la puerta de madera de la caba?a."<<endl;
							cout<<"\n\tPersona masculina: Shhh!"<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...(momento de silencio)..."<<endl;
							cout<<"\n\t..."<<endl;
							cout<<"\n\t...\n"<<endl;
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
							cout<<"\n\tMi perro Eros se pone mas inquieto y rasguña cada vez mas fuerte la puerta de la cabaña,\n\tasi que enciendo la luz de la habitacion, encuentro mi chamarra, me pongo mis botas\n\ty me dirijo a abrir la puerta para que salga Eros"<<endl;//empieza la 3° interaccion
							cout<<"\n\tme tropiezo con un objeto en el camino despertando a mis compañeros con los que sali a acampar,\n\tlogro abrir la puerta y mi perro sale corriendo al campo.\n\tEstoy preocupado, no logro verlo, hay un barranco con un poco de neblina.\n\t"<<endl;
							system("pause");
							cout<<"\n\tEscucho llorar a mi perro, mi hermano me pregunta que si fue el Eros y le dije que si.\n\tMe dirijo rapidamente hacia el lugar donde escuche el sonido de mi mascota."<<endl;
							cout<<"\n\tLlego al borde del barranco y entre la neblina logro observar a una persona corriendo,\n\tadentrandose en el bosque, decido bajar del acantilado y encuentro a Eros lastimado.\n"<<endl;
							system("pause");				
							system("cls");
							do{
								cout<<"3"<<endl;
								cout<<"\n\t1. LLeno de rabia y frustracion persigo a la persona que vi desde el principio.\n\t2. Me quedo con Eros abrazandolo y llorando en silencio.\n\t3. Intento auxiliarlo ya que esta sangrando.\n\t4. Salir del juego.\n"<<endl;
								cout<<"\n\tIngrese la opcion: ";
								cin>>opc;				
								system("cls");
								
								switch(opc){
									
									case 1:
										cout<<"\n\tMe sigo adentrando por el bosque llegando a otra cabaña de Huetita\n\tpero no cabe duda que se encuentra abandonada.\n\tLogro saltar una reja con dificultad,\n\tescucho a lo lejos a mi hermano siguiendome la pista,"<<endl;
										cout<<"\n\teso hace que me de mas valor para perseguir el sonido de las pisadas\n\tde esa extraña persona que es como si pesara muy poco,\n\tapenas logro persibir el sonido de sus pisadas en el pasto."<<endl;
										cout<<"\n\tLlego a la entrada de la cabaña, intento habrir la puerta sin tener exito. Hace frio...\n"<<endl;
										system("pause");
										system("cls");
										
										do{
											cout<<"4"<<endl;
											cout<<"\n\t1. Me quedo congelado sin hacer nada.\n\t2. Le pregunto quien es.\n\t3. Bajo de donde subi.\n\t4. Salir del juego"<<endl;
											cout<<"\n\tIngrese la opcion: ";
											cin>>opc;				
											system("cls");
											
											switch(opc){
												
												case 1:
													cout<<"\n\tLa mujer no se mueve, no dice nada, llega mi hermano y se queda inmobil\n"<<endl;
													system("pause");				
													system("cls");
													break;
													
												case 2:
													cout<<"\n\tNo me responde, ni siquiera me voltea a ver.\n\tLlega mi hermano agitado por las escaleras, y se encuentra a la joven de frente,"<<endl;
													cout<<"\tconfundidos le preguntamos quien era.\n\n\tLa joven menciona algo sobre el equilibrio y que por eso las especies\n\tseguiran en guerra sino se hace algo al respecto.\n"<<endl;
													system("pause");				
													cout<<"\n\tMe agradece por salvarle la vida y me regala un anillo con una inscripion muy inusual.\n"<<endl;
													system("pause");
													system("cls");
													
													do{
														cout<<"5"<<endl;
														cout<<"\n\t1. Me retiro del lugar junto con mi hermano.\n\t2. La invito a la cabaña, podriamos auxiliarla y ayudarla.\n\t3. Me quedo inmobil sin hacer algo.\n\t4. Salir del juego."<<endl;
														cout<<"\n\tIngrese la opcion: ";
														cin>>opc;				
														system("cls");
														
														switch(opc){
															
															case 1:
																cout<<"\n\tRegreso a la cabaña con los demas y les cuento lo que paso,\n\tno logro comprender muchas cosas, entre ellas,\n\tque una parvada salio volando poco despues de que abandonamos la cabaña..."<<endl;
																cout<<""<<endl;
																															
															case 2:
																cout<<"\n\tLa joven se niega a ser ayudada y nos recomienda irnos de ahi.\n"<<endl;
																system("pause");				
																system("cls");
																break;
																
															case 3:
																cout<<"\n\tSigue sin pasar algo.\n\t"<<endl;
																system("pause");				
																system("cls");
																break;
																
															case 4:
																cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
																cout<<"\t0. no\n\t1. si"<<endl;
																cout<<"\n\tIngrese la opcion: ";
																cin>>salida;				
																system("cls");
																break;
																
														}
														
													}while (salida == 0);
													break;
													
												case 3:
													cout<<"\n\tIntento bajar por donde subi, pero sin tener exito...\n"<<endl;
													system("pause");				
													system("cls");
													break;
													
												case 4:
													cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
													cout<<"\t0. no\n\t1. si"<<endl;
													cout<<"\n\tIngrese la opcion: ";
													cin>>salida;				
													system("cls");
													break;
											}
											
										}while (salida == 0);
										break;
									case 2:
										cout<<"\n\tPierdo de vista a la persona que vi corriendo\n"<<endl;
										system("pause");				
										system("cls");
										break;
									
									case 3:
										cout<<"\n\tPierdo de vista a la persona que vi corriendo\n"<<endl;
										system("pause");				
										system("cls");
										break;
										
									case 4:
										cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
										cout<<"\t0. no\n\t1. si"<<endl;
										cout<<"\n\tIngrese la opcion: ";
										cin>>salida;				
										system("cls");
										break;
								}
							}while (salida == 0);
							break;
						
						case 4:
							cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
							cout<<"\t0. no\n\t1. si"<<endl;
							cout<<"\n\tIngrese la opcion: ";
							cin>>salida;
							system("cls");
							break;
							
					}
				}while (salida == 0);
				break;
				
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
				cout<<"\n\tSeguro que desea salir del programa?\n"<<endl;
				cout<<"\t0. no\n\t1. si"<<endl;
				cout<<"\n\tIngrese la opcion: ";
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
