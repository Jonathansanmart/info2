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
/*Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5.
Ej: si se ingresa 3 se debe imprimir:
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
*/
int ejercicio12();
/*Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48 */
int ejercicio14();
/*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2 */
int ejercicio16();
/*Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.*/
int ejercicio18();
/*Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.*/
int ejercicio20();
/*Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/
int ejercicio22();
/*Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter '+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+ +
+ +
++++
*/




int main()
{
    ejercicio2();
    ejercicio4();
    ejercicio6();
    ejercicio8();
    ejercicio10();
    ejercicio12();
    /*ejercicio14();
    ejercicio16();
    ejercicio18();
    ejercicio20();
    ejercicio22();*/
    return 0;
}

int ejercicio2()
{
    cout << "2. ¿Par o impar?: " << endl << endl ;;

    int c;
    cout << "ingrese un numero: ";
    cin >> c;
    if (c%2 == 0) {
        cout << "el numero "<<c << "es par" << endl ;}
    else {
        cout << "el numero "<<c << " es impar" << endl << endl ;}
    return 0;
}


    int ejercicio4()
{ // mayor o menor
    cout << "4. ¿Que numero es menor?: " << endl << endl ;;
    int a,b;
    cout << "ingrese un numero: ";
    cin >> a;
    cout << "ingrese un numero: ";
    cin>> b;

    if (a < b) {
    cout <<  "el numero menor es: " << a << endl ;}
    else {
    cout <<  "el numero menor es: " << b << endl << endl << endl<< endl ;}
    return 0;
}


int ejercicio6()
{
    cout << "6. ¿Potencia un numero?: " << endl << endl ;;
    int d,e ;
    int total = 1;
    cout << "ingrese un numero: ";
    cin >> d;
    cout << "ingrese un numero: ";
    cin>> e;

    for (int f=0; f<e;f++)
    {total= total*d;}
    cout << "La potencia de " << d << " elevado a " << e << " es: " << total << endl;
    return 0;
}
int ejercicio8()
{
    cout << "6. Factorial: " << endl << endl ;;
    int g ;
    int total = 1;
    cout << "ingrese un numero: ";
    cin >> g;

    for (int h= 1; h<=g;h++)
    {total= total*h;}
    cout << "El factorial " << g << " es " << total << endl;
    return 0;
}

int ejercicio10()
{
    cout << "10. multiplos: " << endl << endl ;;
    int i ;
    cout << "ingrese un numero: ";
    cin >> i;

    for (int j= i; j<100; j+=i)

    cout << "Los multiplos de " << i << " son " << j << endl;
    return 0;
}
int ejercicio12()
{
    cout << "10. Potencia N1 a N5 " << endl << endl ;;
    int j, total,total1,total2,total3,total4; ;
    cout << "ingrese un numero: ";
    cin >> j;
    {total=j*1;
    total1=j*j;
    total2=j*j*j;
    total3=j*j*j*j;
    total4=j*j*j*j*j;}

        cout << "Los multiplos de " << j << " son " << total << endl<< total1 << endl<< total2 << endl<< total3 << endl<< total4 << endl;
    return 0;
}
