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
                cout << "\nMENU PRINCIPAL\n" << "--------------\n" << endl;
                cout << "1. Datos de una persona\n";
                cout << "2. Nota final de un estudiante\n";
                cout << "3. Calcular perimetros\n";
                cout << "4. Resolver ecuaciones\n";
                cout << "5. Resolver funcion lineal\n";
                cout << "0. Salir\n";
                cout << "Seleccione una opcion: ";
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
                                            cout << "Saliendo del programa.\n";
                                        } else 
                                            {
                                                cout << "Opcion invalida. Intente de nuevo.\n";
                                            }
            }
    }

// a. Datos de una persona.
void datosPersona() 
    {
        int edad;
        char sexo;
        double altura;

        cout << "\nDATOS PERSONALES\n" << "----------------\n";
        cout << "Ingrese la edad: ";
        cin >> edad;
        cout << "Ingrese el sexo (M/F): ";
        cin >> sexo;
        cout << "Ingrese la altura en metros: ";
        cin >> altura;
        
        cout << "\nDATOS PERSONALES\n" << "----------------\n";
        cout << "Edad: " << edad << " anios\n";
        cout << "Sexo: " << sexo << "\n";
        cout << "Altura: " << altura << " metros\n";
    }

// b. Nota final de un estudiante.
void notaFinalEstudiante() 
    {
        double notaLaboratorio, notaTeorica, notaPractica, notaFinal;

        cout << "\nNOTA FINAL DEL ESTUDIANTE\n" << "-------------------------\n";
        cout << "Ingrese la nota de laboratorio: ";
        cin >> notaLaboratorio;
        cout << "Ingrese la nota teorica: ";
        cin >> notaTeorica;
        cout << "Ingrese la nota de practica: ";
        cin >> notaPractica;

        notaFinal = (0.30 * notaLaboratorio) + (0.60 * notaTeorica) + (0.10 * notaPractica);

        cout << "\nNOTA FINAL DEL ESTUDIANTE\n" << "-------------------------\n";
        cout << "Nota Final: " << notaFinal << endl;
    }

// c. Cálculo de perímetros.
void calcularPerimetros() 
    {
        int opcion;

        cout << "\nCALCULO DE PERIMETROS\n" << "---------------------\n";
        cout << "1. Cuadrado\n";
        cout << "2. Rectangulo\n";
        cout << "3. Triangulo\n";
        cout << "Seleccione una forma geometrica: ";
        cin >> opcion;

        if (opcion == 1) 
            {
                double lado;

                cout << "Ingrese la longitud del lado del cuadrado: ";
                cin >> lado;
                cout << "Perimetro del cuadrado: " << 4 * lado << endl;

            } else if (opcion == 2) 
                {
                    double longitud, ancho;

                    cout << "Ingrese la longitud del rectangulo: ";
                    cin >> longitud;
                    cout << "Ingrese el ancho del rectangulo: ";
                    cin >> ancho;
                    cout << "Perimetro del rectangulo: " << 2 * longitud + 2 * ancho << endl;

                } else if (opcion == 3) 
                    {
                        double lado1, lado2, lado3;

                        cout << "Ingrese la longitud del lado 1 del triangulo: ";
                        cin >> lado1;
                        cout << "Ingrese la longitud del lado 2 del triangulo: ";
                        cin >> lado2;
                        cout << "Ingrese la longitud del lado 3 del triangulo: ";
                        cin >> lado3;
                        cout << "Perimetro del triangulo: " << lado1 + lado2 + lado3 << endl;

                    } else 
                        {
                            cout << "Opcion invalida.\n";
                        }
    }

// d. Resolver ecuaciones.
void resolverEcuaciones() 
    {
        double m, x, x1, x2, m1, m2, b, y;

        cout << "\nRESOLVER ECUACIONES\n" << "-------------------\n";

        // y = m * (x - x1).
        cout << "\nEcuacion: y = m * (x - x1)\n";
        cout << "Ingrese m: ";
        cin >> m;
        cout << "Ingrese x: ";
        cin >> x;
        cout << "Ingrese x1: ";
        cin >> x1;
        y = m * (x - x1);
        cout << "y = " << y << endl;

        // y = m * x + b.
        cout << "\nEcuacion: y = m * x + b\n";
        cout << "Ingrese m: ";
        cin >> m;
        cout << "Ingrese x: ";
        cin >> x;
        cout << "Ingrese b: ";
        cin >> b;
        y = m * x + b;
        cout << "y = " << y << endl;

        // y = (m2 - m1) / (x2 - x1).
        cout << "\nEcuacion: y = (m2 - m1) / (x2 - x1)\n";
        cout << "Ingrese m1: ";
        cin >> m1;
        cout << "Ingrese m2: ";
        cin >> m2;
        cout << "Ingrese x1: ";
        cin >> x1;
        cout << "Ingrese x2: ";
        cin >> x2;
        if (x2 - x1 != 0) 
            {
                y = (m2 - m1) / (x2 - x1);
                cout << "y = " << y << endl;
            } else 
                {
                    cout << "Error: Division por cero NONONOOOOO!\n";
                }
    }

// e. Funcion lineal y = 2x + 1.
void resolverFuncionLineal() 
    {
        double y, x;

        cout << "\nFUNCION LINEAL: y = 2x + 1\n" << "--------------------------\n";

        for (int i = 0; i < 4; ++i) 
            {
                cout << "Ingrese el valor de y: ";
                cin >> y;
                x = (y - 1) / 2.0;
                cout << "Para y = " << y << ", x = " << x << endl;
            }
    }