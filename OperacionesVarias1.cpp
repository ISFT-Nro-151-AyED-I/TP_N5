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

// Prototipos de funciones para conversión de temperatura.
void celsiusAFahrenheit();
void fahrenheitACelsius();
void menuTemperatura();

// Prototipos de funciones para operaciones matemáticas.
void sumar();
void restar();
void multiplicar();
void dividir();
void menuOperaciones();

// Prototipos de funciones para verificaciones.
void menuVerificaciones();
void verificarRango();
void verificarPrimo();

int main() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "\n--------------" << "\nMENU PRINCIPAL\n" << "--------------" << endl;
                cout << "1. Conversion de Temperatura" << endl;
                cout << "2. Operaciones Matematicas" << endl;
                cout << "3. Verificaciones numericas" << endl;
                cout << "0. Salir" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        menuTemperatura();

                    } else if (opcion == 2) 
                        {
                            menuOperaciones();

                        } else if (opcion == 3) 
                            {
                                menuVerificaciones();

                            } else if (opcion == 0) 
                                {
                                    cout << "Saliendo del programa." << endl;

                                } else 
                                    {
                                        cout << "Opcion invalida. Intenta de nuevo." << endl;
                                    }
            }

        return 0;
    }

// Menú de conversión de temperatura.
void menuTemperatura() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "\nCONVERSION DE TEMPERATURA\n" << "------------------------" << endl;
                cout << "1. Celsius a Fahrenheit" << endl;
                cout << "2. Fahrenheit a Celsius" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        celsiusAFahrenheit();

                    } else if (opcion == 2) 
                        {
                            fahrenheitACelsius();

                        } else if (opcion == 0) 
                            {
                                cout << "Volviendo al menu principal." << endl;

                            } else 
                                {
                                    cout << "Opcion invalida. Intenta de nuevo." << endl;
                                }
            }
    }

void celsiusAFahrenheit() 
    {
        double celsius = 0.0, fahrenheit = 0.0;

        cout << "\nCONVERTIR CELSIUS A FAHRENHEIT\n" << "-----------------------------" << endl;
        cout << "Ingresa la temperatura en Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        cout << celsius << " C = " << fahrenheit << " F" << endl;
    }

void fahrenheitACelsius() 
    {
        double fahrenheit = 0.0, celsius = 0.0;

        cout << "\nCONVERTIR FAHRENHEIT A CELSIUS\n"  << "-----------------------------"<< endl;
        cout << "Ingresa la temperatura en Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

        cout << fahrenheit << " F = " << celsius << " C" << endl;
    }

// Menú de operaciones matemáticas.
void menuOperaciones() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "\nOPERACIONES MATEMATICAS\n" << "-----------------------" << endl;
                cout << "1. Sumar" << endl;
                cout << "2. Restar" << endl;
                cout << "3. Multiplicar" << endl;
                cout << "4. Dividir" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una operacion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        sumar();

                    } else if (opcion == 2) 
                        {
                            restar();

                        } else if (opcion == 3) 
                            {
                                multiplicar();

                            } else if (opcion == 4) 
                                {
                                    dividir();

                                } else if (opcion == 0) 
                                    {
                                        cout << "Volviendo al menu principal." << endl;

                                    } else 
                                        {
                                            cout << "Opcion invalida. Intenta de nuevo." << endl;
                                        }
            }
    }

void sumar() 
    {
        double num1 = 0.0, num2 = 0.0;

        cout << "\nSUMA DE NUMEROS\n" << "--------------" << endl;
        cout << "Ingresa el primer numero: ";
        cin >> num1;

        cout << "Ingresa el segundo numero: ";
        cin >> num2;

        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }

void restar() 
    {
        double num1 = 0.0, num2 = 0.0;

        cout << "\nRESTA DE NUMEROS\n" << "--------------" << endl;
        cout << "Ingresa el primer numero: ";
        cin >> num1;

        cout << "Ingresa el segundo numero: ";
        cin >> num2;
        
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    }

void multiplicar() 
    {
        double num1 = 0.0, num2 = 0.0;

        cout << "\nMULTIPLICACION DE NUMEROS\n" << "-----------------------" << endl;
        cout << "Ingresa el primer numero: ";
        cin >> num1;

        cout << "Ingresa el segundo numero: ";
        cin >> num2;
        
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    }

void dividir() 
    {
        double num1 = 0.0, num2 = 0.0;

        cout << "\nDIVISION DE NUMEROS\n" "------------------" << endl;
        cout << "Ingresa el numerador: ";
        cin >> num1;

        cout << "Ingresa el denominador: ";
        cin >> num2;
        
        if (num2 == 0) 
            {
                cout << "Error: No se puede dividir por cero." << endl;
                
            } else 
                {
                    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                }
    }

// Menú de verificaciones.
void menuVerificaciones() 
    {
        int opcion = -1;

        while (opcion != 0) 
            {
                cout << "VERIFICACIONES NUMERICAS\n" << "------------------------" << endl;
                cout << "1. Verificar rango" << endl;
                cout << "2. Verificar numero primo" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "\nSelecciona una opcion: ";
                cin >> opcion;

                if (opcion == 1) 
                    {
                        verificarRango();

                    } else if (opcion == 2) 
                        {
                            verificarPrimo();

                        } else if (opcion == 0) 
                            {
                                cout << "Volviendo al menu principal." << endl;

                            } else 
                                {
                                    cout << "Opcion invalida. Intenta de nuevo." << endl;
                                }
            }
    }

void verificarRango() 
    {
        int inicioRango = 0, finRango = 0, numero = 0;

        cout << "\nVERIFICACION DE RANGO\n" << "--------------------" << endl;
        cout << "Ingresa el inicio del rango: ";
        cin >> inicioRango;

        cout << "Ingresa el fin del rango: ";
        cin >> finRango;

        cout << "Ingresa un numero para verificar: ";
        cin >> numero;

        if (numero >= inicioRango && numero <= finRango) 
            {
                cout << numero << " esta dentro del rango [" << inicioRango << ", " << finRango << "]" << endl;

            } else 
                {
                    cout << numero << " esta fuera del rango [" << inicioRango << ", " << finRango << "]" << endl;
                }
    }

void verificarPrimo() 
    {
        int numero = 0;
        bool es_primo = true;

        cout << "\nVERIFICACION DE NUMERO PRIMO\n" << "---------------------------" << endl;
        cout << "Ingresa un numero para verificar: ";
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
                    cout << numero << " Es un numero primo" << endl;
                    
                } else 
                    {
                        cout << numero << " No es un numero primo" << endl;
                    }
    }