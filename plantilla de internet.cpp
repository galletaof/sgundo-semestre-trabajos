// Plantilla de un Men� de Opciones

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Prototipos de las funciones
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesVariadas();

// Funciones del submen� Operaciones b�sicas
void sumar();
void restar();
void multiplicar();
void dividir();

// Funciones del submen� Operaciones variadas
void numeroDia();
void sumaPrimerosNumeros();
void factorial();
void invertirNumero4Cifras();

int main()
{
    menuPrincipal();
    return 0;
}

void menuPrincipal()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Operaciones basicas" << endl;
        cout << "\t2. Operaciones variadas" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            menuOperacionesBasicas();
            break;

        case 2:
            menuOperacionesVariadas();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

// Definiciones de las funciones

void menuOperacionesBasicas()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU OPERACIONES BASICAS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Sumar" << endl;
        cout << "\t2. Restar" << endl;
        cout << "\t3. Multiplicar" << endl;
        cout << "\t4. Dividir" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            sumar();
            break;

        case 2:
            restar();
            break;

        case 3:
            multiplicar();
            break;

        case 4:
            dividir();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuOperacionesVariadas()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU OPERACIONES VARIADAS" << endl;
        cout << "\t\t\t-------------------------" << endl;
        cout << "\n\t1. Numero y dia" << endl;
        cout << "\t2. Suma de los primeros n numeros naturales" << endl;
        cout << "\t3. Factorial de un numero" << endl;
        cout << "\t4. Invertir un numero de 4 cifras" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            numeroDia();
            break;

        case 2:
            sumaPrimerosNumeros();
            break;

        case 3:
            factorial();
            break;

        case 4:
            invertirNumero4Cifras();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void sumar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

	cout << "\n\tSUMA DE DOS NUMEROS";
    cout << "\n\t===================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 + numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void restar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tRESTA DE DOS NUMEROS";
    cout << "\n\t====================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void multiplicar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tPRODUCTO DE DOS NUMEROS";
    cout << "\n\t=======================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 * numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void dividir()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tCOCIENTE DE DOS NUMEROS";
    cout << "\n\t========================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;

    if (numero2 == 0)
    {
        cout << "\tResultado: No se puede dividir por cero." << endl;
    }
    else
    {
        resultado = numero1 / (numero2 * 1.0);
        cout << "\tResultado: " << resultado << endl;
    }

    system("pause>nul");
}

void numeroDia()
{
    system("cls");

    cout << "\n\tCONVIERTE NUMERO A DIA";
    cout << "\n\t======================\n";

    int dia;
    cout << "\tIngrese el numero de dia: ";
    cin >> dia; // 1, 2, 3, 5, 6, 7

    switch (dia) // En caso de que la variable DIA tome el valor:
    {
    case 1:
        cout << "\tLunes" << endl;
        break;

    case 2:
        cout << "\tMartes" << endl;
        break;

    case 3:
        cout << "\tMiercoles" << endl;
        break;

    case 4:
        cout << "\tJueves" << endl;
        break;

    case 5:
        cout << "\tViernes" << endl;
        break;

    case 6:
        cout << "\tSabado" << endl;
        break;

    case 7:
        cout << "\tDomingo" << endl;
        break;
    }

    system("pause>nul");
}

void sumaPrimerosNumeros()
{
    system("cls");

    int n;
    int suma;

    cout << "\n\tSUMA DE LOS PRIMEROS N NUMEROS";
    cout << "\n\t==============================\n";

    cout << "\tIngrese numero n: ";
    cin >> n;

    suma = n * (n + 1) / 2;

    cout << "\tLa suma de los primeros n numeros es = " << suma << endl;

    system("pause>nul");
}

void factorial()
{
    system("cls");

    int numero, i;
    float factorial;

    cout << "\n\tFACTORIAL DE UN NUMERO";
    cout << "\n\t======================\n";

    cout << "\tIngrese el numero: ";
    cin >> numero;

    factorial = 1;
    for (i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    cout << "\t" << numero << "! = " << factorial << endl;

    system("pause>nul");
}

void invertirNumero4Cifras()
{
    system("cls");

    int nume;
    int u, d, c, um;
    int a, b;
    int resultado;

    cout << "\n\tINVERTIR NUMERO DE 4 CIFRAS";
    cout << "\n\t===========================\n";

    cout << "\n\tIngrese un numero de cuatro cifras: ";
    cin >> nume; // 1234

    um = nume / 1000; // 1
    a = nume / 100;   // 12
    c = a % 10;       // 2
    b = nume / 10;    // 123
    d = b % 10;       // 3
    u = nume % 10;    // 4
    resultado = u * 1000 + d * 100 + c * 10 + um;

    cout << "\t" << u << " " << d << " " << c << " " << um << endl;
    cout << "\tEl numero invertido es: " << resultado << endl;

    system("pause>nul");
}
