#include <iostream>

using namespace std;

/*
 * Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar
*/
int ejercicio2();
/*
 * Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3
*/
int ejercicio4();
/*
 * Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
*/
int ejercicio6();
/*
 * Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
*/
int ejercicio8();
/*Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos
de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100:
33
66
99
*/
int ejercicio10();



int main()
{ // mayor o menor
    cout << "4. Que numero es mayor?: " << endl << endl ;;
    int a,b;
    cout << "ingrese un numero: ";
    cin >> a;
    cout << "ingrese un numero: ";
    cin>> b;

    if (a > b) {
    cout <<  "el numero mayor es: " << a << endl ;}
    else {
    cout <<  "el numero mayor es: " << b << endl << endl ;}


    cout << "2. Par o impar?: " << endl << endl ;;//Par o impar

    int c;
    cout << "ingrese un numero: ";
    cin >> c;
    if (c%2 == 0) {
        cout << "el numero "<<c << "es par" << endl ;}
    else {
        cout << "el numero "<<c << " es impar" << endl << endl ;}
    return 0;


}
