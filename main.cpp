#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    system("color f9");
    char auxMenu[5];//Sirve para guardar el numero del menu y asi evitar errores con decimales.
    short menuPrincipal, menuSecundario;//Variables para navegar en el menu principal y secundario.
    cout<< "..::AREAS Y PERIMETROS::..\n" <<endl;
    cout<< "Ingrese el indice de la operacion deseada "<< endl;
    cout<< "\t1. Ingresar tus propios datos."<< endl;
    cout<< "\t2. Generar datos aleatorios." <<endl;
    cout<< "\t3. Salir."<< endl;
    cin>>auxMenu;
    menuPrincipal=atoi(auxMenu);//Convierte la cadena de caracteres a un entero.
    system("cls");//Limpia Pantalla
    cout<< "..::AREAS Y PERIMETROS::..\n" <<endl;//Escribe Titulo
    switch (menuPrincipal){
        case 1://Caso ingresar dimensiones personalizadas para las figuras.
            system("color f5");
            cout<< "Dimensiones Personalizadas"<<endl<<endl;
            cout<< "Ingrese el indice de la figura deseada " <<endl;
            cout<< "\t1. Triangulo"<< endl;
            cout<< "\t2. Cuadrado"<< endl;
            cout<< "\t3. Circulo"<< endl;
            cout<< "\t4. Trapecio"<< endl;
            cout<< "\t5. Salir"<< endl;
            cin>> auxMenu;
            menuSecundario=atoi(auxMenu);
            system("cls");
            cout<< "..::AREAS Y PERIMETROS::..\n" <<endl;
            switch (menuSecundario){
                case 1://Caso triangulo.
                cout<<"Dimensiones Personalizadas: Triangulo.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float triLado, triArea, triPe, triSP;//Lado, Area, Perimetro y Semi Perimetro respectivamente.
                    cout<< "Ingrese el lado del triangulo equilatero: ";
                    cin>> triLado;
                    if(triLado<0){//Se comprueba que la medida es positiva.
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(triLado==0)
                        exit(0);
                    triPe=3*triLado;
                    triSP=triPe/2;
                    triArea=pow((triSP*3*(triSP-triLado)),0.5);
                    cout<< "\n\t Para su triangulo de lado "<<triLado<<endl;
                    cout<< "\t El perimetro es: "<<triPe<< endl;
                    cout<< "\t El area es: "<< triArea<<endl<<endl;
                break;

                case 2://Caso cuadrado.
                    cout<<"Dimensiones Personalizadas: Cuadrado.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float cuaLado, cuaArea, cuaPe;//Lado, Area y Perimetro respectivamente.
                    cout<< "Ingrese el lado del cuadrado: ";
                    cin>>cuaLado;
                    if(cuaLado<0){
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(cuaLado==0)
                        exit(0);
                    cuaArea= pow(cuaLado,2);
                    cuaPe= cuaLado*4;
                    cout<< "\n\t Para su cuadrado de lado "<<cuaLado<<endl;
                    cout<< "\t El perimetro es: "<<cuaPe<< endl;
                    cout<< "\t El area es: "<<cuaArea<<endl<<endl;
                break;

                case 3://Caso Circulo
                    cout<<"Dimensiones Personalizadas: Circulo.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float diam, rad, cirPe, cirArea;//Diametro, Radio, Perimetro y Area respectivamente.
                    cout<< "Ingrese el diametro del circulo: ";
                    cin>> diam;
                    if(diam<0){
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(diam==0)
                        exit(0);
                    rad=diam/2;
                    cirPe=M_PI*diam;
                    cirArea=M_PI*pow(rad,2);
                    cout<< "\n\t Para su circulo de diametro "<<diam<<endl;
                    cout<< "\t El perimetro es: "<<cirPe<< endl;
                    cout<< "\t El area es: "<< cirArea<<endl<<endl;
                break;

                case 4://Caso Trapecio
                    cout<<"Dimensiones Personalizadas: Trapecio.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float baseIn, baseSu, traH, traArea, traPe;//Base inferior, superior, altura, area y perimetro respectivamente.
                    cout << "Ingrese la base inferior del Trapecio: ";
                    cin >> baseIn;
                    if(baseIn==0)
                        exit(0);
                    cout<< "Ingrese la base superior del Trapecio: ";
                    cin>> baseSu;
                    if(baseSu==0)
                        exit(0);
                    cout<< "Ingrese la altura del Trapecio: ";
                    cin>> traH;
                    if(traH==0)
                        exit(0);
                    if(baseIn<0||baseSu<0||traH<0){
                        cout<<"\nERROR. Todas dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }
                    traArea=traH*(baseSu+baseIn)/2;
                    traPe=baseSu+baseIn+2*traH;//Aproximacion al perimetro del trapecio.
                    cout<< "\n\t Para su Trapecio de base superior: "<<baseSu<<", base inferior: "<<baseIn<<", y altura: "<<traH << endl;
                    cout<< "\t El perimetro aproximado es: "<<traPe<< endl;
                    cout<< "\t El area es: "<< traArea<<endl<<endl;
                break;

                case 5://Caso cerrar programa en el menu secundario.
                    cout<<"Saliendo... Adios...:("<<endl;//Saliendo
                    system("pause");
                    exit(0);

                default://Caso error en el menu.
                    cout<<"Seleccion no valida. Saliendo..."<<endl;//Saliendo
                    system("pause");
                    exit (0);
                }
            system("pause");//Pausa para que el usuario tenga tiempo de leer los resultados.

        break;//Break Caso ingresar dimensiones personalizadas para las figuras.
        case 2://Caso generacion aleatoria
            system("color f0");
            cout<<"Dimensiones Aleatorias"<<endl<<endl;
            srand(time(NULL));//Inicia semilla aleatoria.
            char auxRango[5];//Auxiliar usado para eliminar decimales de los valores de los rangos de generacion aleatoria
            int max, min;//Variables usadas para establecer rangos de generacion aleatoria.
            cout<< "Ingrese el indice de la figura deseada " <<endl;
            cout<< "\t1. Triangulo"<< endl;
            cout<< "\t2. Cuadrado"<< endl;
            cout<< "\t3. Circulo"<< endl;
            cout<< "\t4. Trapecio"<< endl;
            cout<< "\t5. Salir"<< endl;
            cin>> auxMenu;
            menuSecundario=atoi(auxMenu);
            system("cls");
            cout<< "..::AREAS Y PERIMETROS::..\n" <<endl;
            switch (menuSecundario){
                case 1://Caso Triangulo
                    cout<<"Dimensiones Aleatorias: Triangulo.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float triA, triB, triC, triArea, triPe, triSP;//Lados A, B y C; Area, Perimetro y Semi Perimetro respectuvamente.
                    cout<<"Ingrese un valor entero positivo para el rango inferior en la generacion aleatoria: ";
                    cin>>auxRango;
                    min=atoi(auxRango);
                    if(min==0)
                        exit(0);
                    cout<<"Ingrese un valor entero positivo para el rango superior en la generacion aleatoria: ";
                    cin>>auxRango;
                    max=atoi(auxRango);
                    if(max==0)
                        exit(0);
                    if(min<=0||max<=0){//Se comprueba que el rango es positivo.
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(min>max){//Se comprueba que los rangos estan correctamente delimitados.
                        cout<<"\nERROR. El rango superior es menor al inferior.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if((min+1)>max){
                        cout<<"\nERROR. El rango debe ser mayor a 1.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }
                    triA=rand()% (max-min)+min;
                    triB=rand()% (max-min)+min;
                    triC=rand()% (max-min)+min;
                    cout<<"\tLado A: "<<triA<<"\n\tLado B: "<<triB<<"\n\tLado C: "<<triC<<endl;
                    if (((triA+triB)>triC)&&((triA+triC)>triB)&&((triB+triC)>triA)){  // Prueba de formacion de triangulo.
                        cout<<"Se formo un triangulo y es ";
                        if(triA==triB&&triA==triC)//Tres lados iguales.
                            cout<<"equilatero."<<endl;
                        else if(triA==triB||triA==triC||triB==triC)
                            cout<<"isosceles."<<endl;//Dos lados iguales.
                        else
                            cout<<"escaleno."<<endl;//Lados diferentes.
                        triPe=triA+triB+triC;
                        triSP=triPe/2;
                        triArea=pow((triSP*(triSP-triA)*(triSP-triB)*(triSP-triC)),0.5);
                        cout<< "\t El perimetro es: "<<triPe<< endl;
                        cout<< "\t El area es: "<< triArea<<endl<<endl;
                    }else
                        cout<<"No se formo un triangulo."<<endl<<endl;
                break;

                case 2://Caso Cuadrado
                    cout<<"Dimensiones Aleatorias: Cuadrado.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float cuaLado1, cuaLado2, cuaLado3, cuaLado4, cuaArea, cuaPe;//Cuatro lados, area y perimetro respectivamente.
                    cout<<"Ingrese un valor entero positivo para el rango inferior de la generacion aleatoria: ";
                    cin>>auxRango;
                    min=atoi(auxRango);
                    if(min==0)
                        exit(0);
                    cout<<"Ingrese un valor entero positivo para el rango superior de la generacion aleatoria: ";
                    cin>>auxRango;
                    max=atoi(auxRango);
                    if(max==0)
                        exit(0);
                    if(min<=0||max<=0){
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(min>max){
                        cout<<"\nERROR. El rango superior es menor al inferior.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if((min+1)>max){
                        cout<<"\nERROR. El rango debe ser mayor a 1.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }
                    cuaLado1=rand()%(max-min)+min;
                    cuaLado2=rand()%(max-min)+min;
                    cuaLado3=rand()%(max-min)+min;
                    cuaLado4=rand()%(max-min)+min;
                    cout<<"\tLado A: "<<cuaLado1<<"\n\tLado B: "<<cuaLado2<<"\n\tLado C: "<<cuaLado3<<"\n\tLado D: "<<cuaLado4<<endl;
                    if ((cuaLado1==cuaLado2)&&(cuaLado1==cuaLado3)&&(cuaLado1==cuaLado4)){
                        cout<<"Se formo un cuadrado."<<endl;
                        cuaArea= pow(cuaLado1,2);
                        cuaPe= cuaLado1+cuaLado2+cuaLado3+cuaLado4;
                        cout<< "\t El perimetro es: "<<cuaPe<< endl;
                        cout<< "\t El area es: "<< cuaArea<<endl<<endl;
                    }
                    else
                        cout<<"No se formo un cuadrado."<<endl<<endl;
                break;

                case 3://Caso Circulo
                    cout<<"Dimensiones Aleatorias: Circulo.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float diamEx, radEx, arEx, arIn, radIn, arDona;//Diametro, radio y area del circulo exterior; area y radio del circulo interior; y area de la dona generada.
                    cout<<"Ingrese un valor entero positivo para el rango inferior de la generacion aleatoria: ";
                    cin>>auxRango;
                    min=atoi(auxRango);
                    if(min==0)
                        exit(0);
                    cout<<"Ingrese un valor entero positivo para el rango superior de la generacion aleatoria: ";
                    cin>>auxRango;
                    max=atoi(auxRango);
                    if(max==0)
                        exit(0);
                    if(min<=0||max<=0){
                        cout<<"\nERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(min>max){
                        cout<<"\nERROR. El rango superior es menor al inferior.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if((min+1)>max){
                        cout<<"\nERROR. El rango debe ser mayor a 1.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }
                    diamEx=rand()%(max-min)+min;
                    radEx=diamEx/2;
                    radIn=radEx*0.1;
                    arEx=M_PI*pow(radEx,2);
                    arIn=M_PI*pow(radIn,2);
                    arDona=arEx-arIn;
                    cout<< "\n\tEl diametro generado aleatoriamente es: "<<diamEx<<endl;
                    cout<< "\tEl area de la dona es: "<<arDona<< endl<<endl;
                break;

                case 4://Caso Trapecio
                    cout<<"Dimensiones Aleatorias: Trapecio.\nIngrese Cero (0) para terminar el programa."<<endl<<endl;
                    float baseIn, baseSu, traH, traArea, traPe;
                    cout<<"Ingrese un valor entero positivo para el rango inferior de la generacion aleatoria: ";
                    cin>>auxRango;
                    min=atoi(auxRango);
                    if(min==0)
                        exit(0);
                    cout<<"Ingrese un valor entero positivo para el rango superior de la generacion aleatoria: ";
                    cin>>auxRango;
                    max=atoi(auxRango);
                    if(max==0)
                        exit(0);
                    if(min<=0||max<=0){
                        cout<<"ERROR. Las dimensiones ingresadas deben ser positivas.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if(min>max){
                        cout<<"ERROR. El rango superior es menor al inferior.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }else if((min+1)>max){
                        cout<<"ERROR. El rango debe ser mayor a 1.\n\tVolviendo al menu principal."<<endl<<endl;
                        break;
                    }
                    baseIn=rand()%(max-min)+min;
                    baseSu=rand()%(max-min)+min;
                    traH=rand()%(max-min)+min;
                    traArea=traH*(baseSu+baseIn)/2;
                    traPe=baseSu+baseIn+2*traH;
                    cout<< "\n\t El Trapecio generado de base superior: "<<baseSu<<", base inferior: "<<baseIn<<", y altura: "<<traH << endl;
                    cout<< "\t El perimetro aproximado es: "<<traPe<<endl;
                    cout<< "\t El area es: "<< traArea<<endl<<endl;
                break;

                case 5://Caso salir del programa en el menu secundario.
                    cout<<"Saliendo... Adios... :("<<endl;//Saliendo
                    system("pause");
                    exit (0);
                default://Caso error en el menu.
                    cout<<"Seleccion no valida. Saliendo..."<<endl;//Saliendo
                    system("pause");
                    exit (0);

            }
            system("pause");
            break;//Break de caso numeros aleatorios.
        case 3://Caso Salir del programa en el menu principal.
            cout<<"Saliendo... Adios... :("<<endl;//Saliendo
            system("pause");
            exit(0);
        default://Caso error en el menu.
            cout<<"Seleccion no valida. Saliendo..."<<endl;//Saliendo
            system("pause");
            exit (0);

   }//Fin del Switch principal.
}
