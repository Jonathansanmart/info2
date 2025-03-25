#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
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
int ejercicio24();
/*Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles,
equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.*/
int ejercicio26();
/* Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma innita:
 = 4(1 􀀀
1

:::) (1)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3  = 4(1 􀀀 1*/
int ejercicio28();
/*Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).*/
int ejercicio30();

int main()
{
    ejercicio2();
    ejercicio4();
    ejercicio6();
    ejercicio8();
    ejercicio10();
    ejercicio12();
    ejercicio14();
    ejercicio16();
    ejercicio18();
    ejercicio20();
    ejercicio22();
    ejercicio24();
    ejercicio26();
    ejercicio28();
    ejercicio30();
    return 0;
}

int ejercicio2()
{
    cout << "2. ¿Par o impar?: " << endl << endl ;;

    int c;
    cout << "ingrese un numero: ";
    cin >> c;
    if (c%2 == 0) {
        cout << "el numero "<< c << " es par" << endl ;}
    else {
        cout << "el numero "<< c << " es impar" << endl << endl ;}
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
    cout <<  "el numero menor es: " << b << endl << endl ;}
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
    cout << "La potencia de " << d << " elevado a " << e << " es: " << total << endl<< endl;
    return 0;
}
int ejercicio8()
{
    cout << "8. Factorial: " << endl << endl ;;
    int g ;
    int total = 1;
    cout << "ingrese un numero: ";
    cin >> g;

    for (int h= 1; h<=g;h++)
    {total= total*h;}
    cout << "El factorial " << g << " es " << total << endl<< endl;
    return 0;
}

int ejercicio10()
{
    cout << "10. multiplos: " << endl << endl ;;
    int i ;
    cout << "ingrese un numero: ";
    cin >> i;

    for (int j= i; j<100; j+=i)

    cout << "Los multiplos de " << i << " son " << j << endl<< endl;
    return 0;
}
int ejercicio12()
{
    cout << "12. Potencia N^1 a N^5 " << endl << endl;

    int j, resultado = 1;
    cout << "Ingrese un número: ";
    cin >> j;

    for (int i = 1; i <= 5; i++) {
        resultado *= j;
        cout << j << "^" << i << " = " << resultado << endl<< endl;
    }
    system("pause");

    return 0;
}
int ejercicio14()
{
    cout << "14. Columnas " << endl << endl ;

    for (int k = 1, l = 50; k <= 50; k++, l--){

    cout <<  k << "\t" << l << endl<< endl;}
    return 0;
}

int ejercicio16()
{
    cout << "16. promedio y 0 " << endl << endl;
    int n = 0, suma = 0, contador = 0;

    do {
        cout << "Ingrese un numero diferente de 0: ";
        cin >> n;

        if (n != 0) {
            suma += n;
            contador++;
        }
    } while (n != 0);

    if (contador > 0) {
        float promedio = static_cast<float>(suma) / contador;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números válidos para el promedio" << endl;
    }

    return 0;
}
int ejercicio18()
{
    cout << "18.  cuadrado perfecto" << endl << endl;

    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    bool esCuadradoPerfecto = false;

    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            esCuadradoPerfecto = true;
            break;  // Ya lo encontramos, no hay que seguir
        }
    }

    if (esCuadradoPerfecto) {
        cout << num << " es un cuadrado perfecto." << endl;
    } else {
        cout << num << " NO es un cuadrado perfecto." << endl;
    }

    return 0;
}
int ejercicio20() {
    cout << "20. palindromo" << endl << endl;

    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int original = n;
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    if (original == invertido) {
        cout << original << " es un número palíndromo." << endl;
    } else {
        cout << original << " NO es un número palíndromo." << endl;
    }

    return 0;
}

int ejercicio22() {
    cout << "22.  horas, minutos, segundos" << endl << endl;

    int totalSegundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSegundos;

    int horas = totalSegundos / 3600;
    int resto = totalSegundos % 3600;

    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
int ejercicio24() {
    cout << "24. Cuadrado con bordes '+' y centro vacío" << endl << endl;

    int n;
    cout << "Ingrese el tamaño del cuadrado: ";
    cin >> n;

    for (int fila = 1; fila <= n; fila++) {
        for (int col = 1; col <= n; col++) {
            // Bordes: primera o última fila, o primera/última columna
            if (fila == 1 || fila == n || col == 1 || col == n) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Nueva línea después de cada fila
    }

    return 0;
}
int ejercicio26() {
    cout << "26. Tipo de triángulo según sus lados" << endl << endl;

    int a, b, c;
    cout << "Ingrese el primer lado: ";
    cin >> a;
    cout << "Ingrese el segundo lado: ";
    cin >> b;
    cout << "Ingrese el tercer lado: ";
    cin >> c;

    // Validar si forman un triángulo
    if (a + b > c && a + c > b && b + c > a) {
        // Clasificar tipo de triángulo
        if (a == b && b == c) {
            cout << "Se forma un triángulo equilátero." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Se forma un triángulo isósceles." << endl;
        } else {
            cout << "Se forma un triángulo escaleno." << endl;
        }
    } else {
        cout << "Las longitudes ingresadas no forman un triángulo." << endl;
    }

    return 0;
}
int ejercicio28() {
    cout << "28. serie de Leibniz" << endl << endl;

    int n;
    cout << "Ingrese el número de términos: ";
    cin >> n;

    double pi = 0.0;

    for (int i = 0; i < n; i++) {
        double termino = 1.0 / (2 * i + 1); // 1/1, 1/3, 1/5, ...
        if (i % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }
    }

    pi *= 4; // Aplicar el 4 que multiplica la serie

    cout.precision(15); // Mostrar más decimales
    cout << "Aproximación de pi con " << n << " términos: " << pi << endl;

    return 0;
}

int ejercicio30() {

    cout << "=== Adivina el número secreto entre 0 y 100 ===" << endl;

    srand(time(0));

    int numeroSecreto = rand() % 101;

    int intentoDelUsuario;
    int cantidadDeIntentos = 0;

    bool acertado = false;

    while (!acertado) {
        cout << "Ingresa tu intento: ";
        cin >> intentoDelUsuario;
        cantidadDeIntentos++;

        if (intentoDelUsuario > numeroSecreto) {
            cout << "Casi, pero es más pequeño." << endl;
        } else if (intentoDelUsuario < numeroSecreto) {
            cout << "el numero es más grande." << endl;
        } else {
            acertado = true;
        }
    }

    // Resultado final
    cout << "\n¡Felicitaciones! El número era " << numeroSecreto << "." << endl;
    cout << "Lo adivinaste en " << cantidadDeIntentos << " intento(s)." << endl;

    return 0;
}
