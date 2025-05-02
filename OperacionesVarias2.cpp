/*  Resolver y realizar en C++:

        a. Realice un programa que lea de la entrada estándar los siguientes datos de una persona: Edad: dato de tipo entero. 
           Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras leer los datos, el programa debe mostrarlos 
           en la salida estándar.

        b. La Nota final de un estudiante es el promedio de tres notas: la nota de laboratorio que cuenta un 30% del total, 
           la nota teórica que cuenta un 60% y la nota de Práctica que cuenta el 10% restante. Escriba un programa que lea de la 
           entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.

        c. Realizar un programa que pida los datos necesarios y calcule los perímetros:
           Puede hardcodearlo (poner los valores uno mismo) o pedir por consola.

        Forma 	        Fórmula 	        Variables 

        Cuadrado 	    P = 4 s 	        s es la longitud del lado del cuadrado. 
        Rectángulo 	    P = 2 L + 2 W 	    L y W son las longitudes de los lados del rectángulo (longitud y ancho). 
        Triángulo 	    a + b + c 	        a , b , y c son las longitudes de los lados. 

        d. Nos piden un programa que resuelva las siguientes ecuaciones con salida Y por consola (asignar valores 
           a x´s , m y b  via cin):

                                            y = m*(x-x1)
		                                    y = m*x + b
		                                    y = (m2-m1)/(x2-x1)

        e. Nos piden un programa que resuelva la siguiente función lineal con salida x consola, deber pedir 4 valores 
           para x dando le valor de y por consola:

                                            y = 2*x + 1 */



// OperacionesVarias2.cpp
#include <iostream>

using namespace std;

void menu();
void datosPersona();
void notaFinalEstudiante();
void calcularPerimetros();
void resolverEcuaciones();
void resolverFuncionLineal();

int main() 
    {
        menu();
        return 0;
    }

void menu() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "\nMENU PRINCIPAL\n" << "--------------" << endl;
                cout << "1. Datos de una persona" << endl;
                cout << "2. Nota final de un estudiante" << endl;
                cout << "3. Calcular perimetros" << endl;
                cout << "4. Resolver ecuaciones" << endl;
                cout << "5. Resolver funcion lineal" << endl;
                cout << "0. Salir" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        datosPersona();

                    } else if (opcion == 2) 
                        {
                            notaFinalEstudiante();

                        } else if (opcion == 3) 
                            {
                                calcularPerimetros();

                            } else if (opcion == 4) 
                                {
                                    resolverEcuaciones();

                                } else if (opcion == 5) 
                                    {
                                        resolverFuncionLineal();

                                    } else if (opcion == 0) 
                                        {
                                            cout << "Saliendo del programa." << endl;
                                            
                                        } else 
                                            {
                                                cout << "Opcion invalida. Intenta de nuevo." << endl;
                                            }
            }
    }

// a. Datos de una persona.
void datosPersona() 
    {
        int opcion = -1, edad = 0;
        double altura = 0;
        char sexo;

        while (opcion != 0) 
            {
                cout << "\nDATOS PERSONALES\n" << "----------------" << endl;
                cout << "1. Ingresar y mostrar datos" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        cout << "\nINGRESO DE DATOS\n" << "----------------" << endl;
                        cout << "Ingresa la edad: ";
                        cin >> edad;

                        cout << "Ingresa el sexo (M/F): ";
                        cin >> sexo;

                        cout << "Ingresa la altura en metros: ";
                        cin >> altura;
                        
                        cout << "\nDATOS PERSONALES\n" << "----------------\n";
                        cout << "Edad: " << edad << " anios" << endl;
                        cout << "Sexo: " << sexo << endl;
                        cout << "Altura: " << altura << " metros" << endl;

                    } else if (opcion == 0) 
                        {
                            cout << "Volviendo al menu principal..." << endl;

                        } else 
                            {
                                cout << "Opcion invalida. Intenta de nuevo." << endl;
                            }
            }
    }

// b. Nota final de un estudiante.
void notaFinalEstudiante() 
    {
        int opcion = -1;
        double notaLaboratorio = 0.0, notaTeorica = 0.0, notaPractica = 0.0, notaFinal = 0.0;

        while (opcion != 0) 
            {
                cout << "\nNOTA FINAL\n" << "----------" << endl;
                cout << "1. Calcular nota final" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        cout << "\nCALCULO DE NOTA FINAL\n" << "---------------------" << endl;
                        cout << "Ingresa la nota de laboratorio: ";
                        cin >> notaLaboratorio;

                        cout << "Ingresa la nota teorica: ";
                        cin >> notaTeorica;

                        cout << "Ingresa la nota de practica: ";
                        cin >> notaPractica;

                        notaFinal = (0.30 * notaLaboratorio) + (0.60 * notaTeorica) + (0.10 * notaPractica);

                        cout << "\nRESULTADO\n" << "---------" << endl;
                        cout << "Nota Final: " << notaFinal << endl;

                    } else if (opcion == 0) 
                        {
                            cout << "Volviendo al menu principal..." << endl;

                        } else 
                            {
                                cout << "Opcion invalida. Intenta de nuevo." << endl;
                            }
            }
    }

// c. Cálculo de perímetros.
void calcularPerimetros() 
    {
        int opcion = -1;
        double lado = 0.0, longitud = 0.0, ancho = 0.0, lado1 = 0.0, lado2 = 0.0, lado3 = 0.0;

        while (opcion != 0) 
            {
                cout << "\nCALCULO DE PERIMETROS\n" << "---------------------" << endl;
                cout << "1. Calcular perimetro de cuadrado" << endl;
                cout << "2. Calcular perimetro de rectangulo" << endl;
                cout << "3. Calcular perimetro de triangulo" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        
                        cout << "\nPERIMETRO DE CUADRADO\n" << "--------------------" << endl;
                        cout << "Ingresa la longitud del lado: ";
                        cin >> lado;

                        cout << "Perimetro: " << 4 * lado << endl;

                    } else if (opcion == 2) 
                        {
                            cout << "\nPERIMETRO DE RECTANGULO\n" << "----------------------" << endl;
                            cout << "Ingresa la longitud: ";
                            cin >> longitud;

                            cout << "Ingresa el ancho: ";
                            cin >> ancho;

                            cout << "Perimetro: " << 2 * (longitud + ancho) << endl;

                        } else if (opcion == 3) 
                            {            
                                cout << "\nPERIMETRO DE TRIANGULO\n" << "---------------------" << endl;
                                cout << "Ingresa el lado 1: ";
                                cin >> lado1;

                                cout << "Ingresa el lado 2: ";
                                cin >> lado2;

                                cout << "Ingresa el lado 3: ";
                                cin >> lado3;

                                cout << "Perimetro: " << lado1 + lado2 + lado3 << endl;

                            } else if (opcion == 0) 
                                {
                                    cout << "Volviendo al menu principal..." << endl;

                                } else 
                                    {
                                        cout << "Opcion invalida. Intenta de nuevo." << endl;
                                    }
            }
    }

// d. Resolver ecuaciones.
void resolverEcuaciones() 
    {
        int opcion = -1;
        double b = 0.0, m= 0.0, m1= 0.0, m2= 0.0, x= 0.0, x1= 0.0, x2= 0.0, y= 0.0;

        while (opcion != 0) 
            {
                cout << "\nRESOLUCION DE ECUACIONES\n" << "------------------------" << endl;
                cout << "1. Resolver y = m * (x - x1)" << endl;
                cout << "2. Resolver y = m * x + b" << endl;
                cout << "3. Resolver y = (m2 - m1) / (x2 - x1)" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        cout << "\nECUACION: y = m * (x - x1)\n" << "-----------------------" << endl;
                        cout << "Ingresa m: ";
                        cin >> m;

                        cout << "Ingresa x: ";
                        cin >> x;

                        cout << "Ingresa x1: ";
                        cin >> x1;

                        y = m * (x - x1);

                        cout << "Resultado: y = " << y << endl;

                    } else if (opcion == 2) 
                        {
                            cout << "\nECUACION: y = m * x + b\n" << "----------------------" << endl;
                            cout << "Ingresa m: ";
                            cin >> m;

                            cout << "Ingresa x: ";
                            cin >> x;

                            cout << "Ingresa b: ";
                            cin >> b;

                            y = m * x + b;

                            cout << "Resultado: y = " << y << endl;

                        } else if (opcion == 3) 
                            {
                                cout << "\nECUACION: y = (m2 - m1) / (x2 - x1)\n" << "--------------------------------" << endl;
                                cout << "Ingresa m1: ";
                                cin >> m1;

                                cout << "Ingresa m2: ";
                                cin >> m2;

                                cout << "Ingresa x1: ";
                                cin >> x1;

                                cout << "Ingresa x2: ";
                                cin >> x2;

                                if (x2 != x1) 
                                    {
                                        y = (m2 - m1) / (x2 - x1);

                                        cout << "Resultado: y = " << y << endl;

                                    } else 
                                        {
                                            cout << "Error: Division por cero (x2 no puede ser igual a x1)" << endl;
                                        }
                            } else if (opcion == 0) 
                                {
                                    cout << "Volviendo al menu principal..." << endl;

                                } else 
                                    {
                                        cout << "Opcion invalida. Intenta de nuevo." << endl;
                                    }
            }
    }

// e. Funcion lineal y = 2x + 1.
void resolverFuncionLineal() 
    {
        int opcion = -1;
        double y = 0.0, x = 0.0;

        while (opcion != 0) 
            {
                cout << "\nFUNCION LINEAL\n" << "--------------" << endl;
                cout << "1. Resolver y = 2x + 1 (4 veces)" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        cout << "\nRESOLVIENDO y = 2x + 1\n" << "--------------------" << endl;
                        for (int i = 0; i < 4; ++i) 
                            { 
                                cout << "Ingresa el valor de y (" << i+1 << "/4): ";
                                cin >> y;

                                x = (y - 1) / 2.0;

                                cout << "Para y = " << y << ", x = " << x << endl;
                            }
                    } else if (opcion == 0) 
                        {
                            cout << "Volviendo al menu principal..." << endl;
                            
                        } else 
                            {
                                cout << "Opcion invalida. Intenta de nuevo." << endl;
                            }
            }
    }