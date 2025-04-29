/* Desarrollar en C++ usando funciones, la idea es ir modularizando y desacoplando el código separando la definición, 
   el llamado de la implementación.

a.	Crear un programa por consola que convierta grados Centígrados en Fahrenheit y viceversa, el programa debe preguntar 
    qué operación desea hacer el usuario.
b.	Crear un programa que sume, reste, multiplica y divida.
c.	Realizar un programa que pida un rango, luego que ingrese un número y determine si está dentro del rango solicitados.
d.	Realizar un programa que permita saber si un número es primo o no. */



// OperacionesVarias1.cpp
#include <iostream>

using namespace std;

void celsiusAFahrenheit(double celsius, double &fahrenheit);
void fahrenheitACelsius(double fahrenheit, double &celsius);
void convertirTemperatura();
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);
void realizarOperaciones();
void verificarRango();
void verificarPrimo();

int main() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "\nELIGE LA OPERACION A REALIZAR\n" << "-----------------------------\n" << endl;
                cout << "1. Convertir Temperatura\n";
                cout << "2. Realizar Operaciones\n";
                cout << "3. Verificar Rango\n";
                cout << "4. Verificar Primo\n";
                cout << "0. Salir\n";
                cout << "Seleccione una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        convertirTemperatura();

                    } else if (opcion == 2) 
                        {
                            realizarOperaciones();

                        } else if (opcion == 3) 
                            {
                                verificarRango();

                            } else if (opcion == 4) 
                                {
                                    verificarPrimo();

                                } else if (opcion == 0) 
                                    {
                                        cout << "Saliendo del programa.\n";

                                    } else 
                                        {
                                            cout << "Opcion invalida. Intente de nuevo.\n";
                                        }
            }

        return 0;
    }

// Función para convertir Celsius a Fahrenheit.
void celsiusAFahrenheit(double celsius, double &fahrenheit) 
    {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    }

// Función para convertir Fahrenheit a Celsius.
void fahrenheitACelsius(double fahrenheit, double &celsius) 
    {
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    }

// Función para realizar la conversión de temperatura.
void convertirTemperatura() 
    {
        int opcion = -1;
        double temperatura, resultado = 0.0;

        while (opcion != 1 && opcion != 2) 
            {
                cout << "\nCONVERSOR DE TEMPERATURA\n" << "------------------------\n" << endl;
                cout << "1. Celsius a Fahrenheit\n";
                cout << "2. Fahrenheit a Celsius\n";
                cout << "Seleccione una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        cout << "Ingrese la temperatura en Celsius: ";
                        cin >> temperatura;
                        celsiusAFahrenheit(temperatura, resultado);
                        cout << temperatura << " Celsius = " << resultado << " Fahrenheit\n";

                    } else if (opcion == 2) 
                        {
                            cout << "Ingrese la temperatura en Fahrenheit: ";
                            cin >> temperatura;
                            fahrenheitACelsius(temperatura, resultado);
                            cout << temperatura << " Fahrenheit = " << resultado << " Celsius\n";

                        } else 
                            {
                                cout << "Opcion invalida. Intente de nuevo.\n";
                            }
            }
    }

// Función para sumar dos números.
double sumar(double a, double b) 
    {
        return a + b;
    }

// Función para restar dos números.
double restar(double a, double b) 
    {
        return a - b;
    }

// Función para multiplicar dos números.
double multiplicar(double a, double b) 
    {
        return a * b;
    }

// Función para dividir dos números.
double dividir(double a, double b) 
    {
        if (b == 0) 
            {
                cout << "Error: No se puede dividir por cero.\n";
                return 0;
            }

        return a / b;
    }

// Función para realizar operaciones aritméticas.
void realizarOperaciones() 
    {
        int operacion = -1;
        double num1, num2, resultado = 0.0;

        while (operacion < 1 || operacion > 4) 
            {
                cout << "\nCALCULADORA BASICA\n" << "------------------\n" << endl;
                cout << "1. Sumar\n";
                cout << "2. Restar\n";
                cout << "3. Multiplicar\n";
                cout << "4. Dividir\n";
                cout << "Seleccione una operacion: ";
                cin >> operacion;

                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                if (operacion == 1) 
                    {
                        resultado = sumar(num1, num2);
                        cout << num1 << " + " << num2 << " = " << resultado << endl;

                    } else if (operacion == 2) 
                        {
                            resultado = restar(num1, num2);
                            cout << num1 << " - " << num2 << " = " << resultado << endl;

                        } else if (operacion == 3) 
                            {
                                resultado = multiplicar(num1, num2);
                                cout << num1 << " * " << num2 << " = " << resultado << endl;

                            } else if (operacion == 4) 
                                {
                                    resultado = dividir(num1, num2);

                                    if (resultado != 0) 
                                        {
                                            cout << num1 << " / " << num2 << " = " << resultado << endl;
                                        }
                                } else 
                                    {
                                        cout << "Operacion invalida. Intente de nuevo.\n";
                                    }
            }
    }

// Función para verificar si un número está en un rango.
void verificarRango() 
    {
        int numero, inicioRango, finRango;

        cout << "\nVERIFICAR RANGO NUMERICO\n" << "------------------------\n" << endl;
        cout << "Ingrese el inicio del rango: ";
        cin >> inicioRango;
        cout << "Ingrese el fin del rango: ";
        cin >> finRango;

        cout << "Ingrese un numero para verificar: ";
        cin >> numero;

        if (numero >= inicioRango && numero <= finRango) 
            {
                cout << numero << " esta dentro del rango [" << inicioRango << ", " << finRango << "]\n";

            } else 
                {
                    cout << numero << " esta fuera del rango [" << inicioRango << ", " << finRango << "]\n";
                }
    }

// Función para verificar si un número es primo.
void verificarPrimo() 
    {
        int numero;
        bool es_primo = true;

        cout << "\nVERIFICAR PRIMOS\n" << "----------------\n" << endl;
        cout << "Ingrese un numero para verificar si es primo: ";
        cin >> numero;

        if (numero <= 1) 
            {
                es_primo = false;

            } else 
                {
                    for (int i = 2; i * i <= numero; ++i) 
                        {
                            if (numero % i == 0) 
                                {
                                    es_primo = false;
                                    break;
                                }
                        }
                }

        if (es_primo) 
            {
                cout << numero << " es un numero primo\n";

            } else 
                {
                    cout << numero << " no es un numero primo\n";
                }
    }