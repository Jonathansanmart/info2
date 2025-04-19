#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// EJERCICIO 1 Intercambiar y revertir un arreglo

void fun_a(int *px, int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam) {
    int f, l;
    int *b = a;
    for (f = 0, l = tam - 1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}

int ejercicio1() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Antes de invertir: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    fun_b(array, 10);

    // Mostrar después
    cout << "Luego de invertir: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
// EJERCICIO 2 Calcular suma y promedio con punteros

void fun_c(double *a, int n, double *promedio, double *suma) {
    *suma = 0.0;
    for (int i = 0; i < n; i++) {
        *suma += a[i];
    }
    *promedio = *suma / n;
}

int ejercicio2() {
    double notas[] = {3.5, 4.0, 2.8, 5.0, 4.2};
    int cantidad = 5;
    double suma = 0.0;
    double promedio = 0.0;

    fun_c(notas, cantidad, &promedio, &suma);

    cout << "Suma de notas: " << suma << endl;
    cout << "Promedio de notas: " << promedio << endl;

    return 0;
}
// EJERCICIO 3 Punteros en matrices

unsigned short b[4][2] = {
    {77, 50},
    {5, 2},
    {28, 39},
    {99, 3}
};

/*Elemento	Dirección (Hex)
b[0][0]	0DA12
b[0][1]	0DA14
b[1][0]	0DA16
b[1][1]	0DA18
b[2][0]	0DA1A
b[2][1]	0DA1C
b[3][0]	0DA1E
b[3][1]	0DA20 *
Expresión	Valor / Dirección	Explicación
b	Dirección de b[0] → apunta a {77, 50}	Es la dirección del primer subarreglo b[0]
b + 2	Dirección de b[2]	Apunta al subarreglo {28, 39}
*(b + 2)	Arreglo {28, 39}	Es b[2], o sea, el arreglo de esa fila
*(b + 2) + 1	Dirección de b[2][1]	Mueve un elemento dentro de b[2]
*(*(b + 2) + 1)	Valor 39	Accede al valor b[2][1]
b[3][1]	Valor 3	Accede directamente a ese elemento
b++	 Error de compilación	Los arreglos no se pueden incrementar (punteros sí, pero arreglos no)

*/

// PROBLEMA 1 Billetes y monedas

int problema1() {
    int monedas[] = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    int contar[10] = {0};
    int canti, falta;


    cout << "Ingrese cuanto dinero desea contar: ";
    cin >> canti;

    falta = canti;

    for (int a = 0; a < 10; a++) {
        contar[a] = falta / monedas[a];
        falta = falta % monedas[a];
    }

    cout << "Número de billetes y monedas:\n";
    for (int a = 0 ; a < 10; a++) {
        cout << monedas[a] << " : " << contar[a] << endl;
    }

    cout << "Faltante: " << falta << endl;
    return 0;
}

// PROBLEMA 2 Letras aleatorias y conteo

int problema2() {
    const int TAM = 200;
    char letras[TAM];
    int conteo[26] = {0};

    srand(time(0));

    for (int i = 0; i < TAM; i++) {
        letras[i] = 'A' + rand() % 26;
        conteo[letras[i] - 'A']++;
    }

    cout << "Arreglo generado:\n";
    for (int i = 0; i < TAM; i++) {
        cout << letras[i];
        if ((i + 1) % 50 == 0) cout << endl;
    }

    cout << "\n\nConteo de letras:\n";
    for (int i = 0; i < 26; i++) {
        if (conteo[i] > 0) {
            cout << char('A' + i) << ": " << conteo[i] << endl;
        }
    }

    return 0;
}


// PROBLEMA 3

bool compararCadenas(const char* cad1, const char* cad2) {
    int i = 0;
    while (cad1[i] != '\0' && cad2[i] != '\0') {
        if (cad1[i] != cad2[i]) {
            return false;
        }
        i++;
    }
    return cad1[i] == '\0' && cad2[i] == '\0';
}

int problema3() {
    char cadena1[100], cadena2[100];

    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);

    if (compararCadenas(cadena1, cadena2)) {
        cout << "Las cadenas son iguales." << endl;
    } else {

        cout << "Las cadenas son diferentes." << endl;
    }

    return 0;
}

// PROBLEMA 4 Convertir cadena a número

int convertir(const char* cadena) {
    int resultado = 0;
    int i = 0;

    while (cadena[i] != '\0') {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            resultado = resultado * 10 + (cadena[i] - '0');
        } else {
            return -1;
        }
        i++;
    }

    return resultado;
}

int problema4() {
    char cadena[100];

    cout << "Ingrese una cadena de números (ej. 123): ";
    cin >> cadena;

    int numero = convertir(cadena);

    if (numero != -1) {
        cout << "La cadena convertida es el número: " << numero << endl;
    } else {
        cout << "Lla cadena contiene caracteres no numericos." << endl;
    }

    return 0;
}
// PROBLEMA 5 Convertir cadena a número
void convertir(int numero, char* cadena) {
    int i = 0;
    bool negativo = false;

    if (numero < 0) {
        negativo = true;
        numero = -numero;
    }

    do {
        int digito = numero % 10;
        cadena[i++] = '0' + digito;
        numero /= 10;
    } while (numero > 0);

    if (negativo) {
        cadena[i++] = '-';
    }

    cadena[i] = '\0';

    // Invertir la cadena
    int inicio = 0;
    int fin = i - 1;
    while (inicio < fin) {
        char temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;
        inicio++;
        fin--;
    }
}

// Función de prueba (problema 5)
int problema5() {
    int numero;
    char cadena[100];

    cout << "Ingrese un número entero: ";
    cin >> numero;

    convertir(numero, cadena);

    cout << "El número convertido a cadena es: " << cadena << endl;

    return 0;
}
//Problema  6 min a May
void convertir(char* cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - 32;
        }
    }
}

int problema6() {
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;

    convertir(cadena);

    cout << "En mayúscula: " << cadena << endl;

    return 0;
}
// Problema 7
void convertirm(char* cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            cadena[i] = cadena[i] + 32; // También podrías usar tolower(cadena[i])
        }
    }
}

int problema7() {
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;

    convertirm(cadena);

    cout << "En minúscula: " << cadena << endl;

    return 0;
}
//  Problema 8 cuenta cuantas veces se repite en una letra

int contarLetra(const char* cadena, char letra) {
    int contador = 0;

    // Convertir letra a minúscula si es mayúscula
    if (letra >= 'A' && letra <= 'Z') {
        letra += 32;
    }

    for (int i = 0; cadena[i] != '\0'; i++) {
        char actual = cadena[i];

        // Convertir carácter actual a minúscula si es mayúscula
        if (actual >= 'A' && actual <= 'Z') {
            actual += 32;
        }

        if (actual == letra) {
            contador++;
        }
    }

    return contador;
}

int problema8() {
    char cadena[100];
    char letra;

    cout << "Ingrese una cadena de texto: ";
    cin.getline(cadena, 100);

    cout << "Ingrese la letra a buscar: ";
    cin >> letra;

    int veces = contarLetra(cadena, letra);

    cout << "La letra '" << letra << "' aparece " << veces << " veces en la cadena." << endl;

    return 0;
}
// Probelma 9 copia cadena
void copiarCadena(const char* origen, char* destino) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0'; // No olvidar el fin de cadena
}

int problema9() {
    char cadenaOriginal[100];
    char copia[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadenaOriginal, 100);

    copiarCadena(cadenaOriginal, copia);

    cout << "Cadena original: " << cadenaOriginal << endl;
    cout << "Copia de la cadena: " << copia << endl;

    return 0;
}

// problema 10 comparas cadenas
bool comparar(const char* cad1, const char* cad2) {
    int i = 0;
    while (cad1[i] != '\0' && cad2[i] != '\0') {
        if (cad1[i] != cad2[i]) {
            return false;
        }
        i++;
    }

    // Verificamos si ambas terminaron al mismo tiempo
    return cad1[i] == '\0' && cad2[i] == '\0';
}

int problema10() {
    char cadena1[100];
    char cadena2[100];

    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);

    if (comparar(cadena1, cadena2)) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }

    return 0;
}
// Problema 11 contener una en la otra

bool contiene(const char* texto, const char* subcadena) {
    int i = 0;

    while (texto[i] != '\0') {
        int j = 0;

        while (subcadena[j] != '\0' && texto[i + j] != '\0' && texto[i + j] == subcadena[j]) {
            j++;
        }


        if (subcadena[j] == '\0') {
            return true;
        }

        i++;
    }

    return false;
}

int problema11() {
    char texto[100];
    char subcadena[100];

    cout << "Ingrese el texto completo: ";
    cin.getline(texto, 100);

    cout << "Ingrese la subcadena a buscar: ";
    cin.getline(subcadena, 100);

    if (contiene(texto, subcadena)) {
        cout << "La subcadena está contenida en el texto." << endl;
    } else {
        cout << "La subcadena NO está contenida en el texto." << endl;
    }

    return 0;
}

// Problema 12 invertir cadena

void invertir(char* cadena) {
    int i = 0;

    while (cadena[i] != '\0') {
        i++;
    }

    int inicio = 0;
    int fin = i - 1;

    while (inicio < fin) {
        char temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;
        inicio++;
        fin--;
    }
}

int problema12() {
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;

    invertir(cadena);

    cout << "Invertida: " << cadena << endl;

    return 0;
}

// Problema 13 todo a minisculas sin importar otros carac

void convertiram(char* cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            cadena[i] = cadena[i] + 32;  // o: cadena[i] = tolower(cadena[i]);
        }
    }
}

int problema13() {
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;

    convertiram(cadena);

    cout << "Convertida a minúscula: " << cadena << endl;

    return 0;
}
// Problema 14
const int N = 5;

void lmatriz(int matriz[N][N]) {
    int valor = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = valor++;
        }
    }
}

void impm(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void rotar90(int origen[N][N], int destino[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            destino[j][N - 1 - i] = origen[i][j];
        }
    }
}

int problema14() {
    int matriz[N][N];
    int rotada90[N][N];
    int rotada180[N][N];
    int rotada270[N][N];

    lmatriz(matriz);

    cout << "Matriz original:" << endl;
    impm(matriz);

    rotar90(matriz, rotada90);
    cout << "Matriz rotada 90°:" << endl;
    impm(rotada90);

    rotar90(rotada90, rotada180);
    cout << "Matriz rotada 180°:" << endl;
    impm(rotada180);

    rotar90(rotada180, rotada270);
    cout << "Matriz rotada 270°:" << endl;
    impm(rotada270);

    return 0;
}
// Problema 15 rectangulo

void interseccionRectangulos(int A[4], int B[4], int C[4]) {
    int x1 = max(A[0], B[0]);
    int y1 = max(A[1], B[1]);

    int x2 = min(A[0] + A[2], B[0] + B[2]);
    int y2 = min(A[1] + A[3], B[1] + B[3]);

    int ancho = x2 - x1;
    int alto = y2 - y1;

    if (ancho > 0 && alto > 0) {
        C[0] = x1;
        C[1] = y1;
        C[2] = ancho;
        C[3] = alto;
    } else {

        C[0] = C[1] = C[2] = C[3] = 0;
    }
}

int problema15() {
    int A[4] = {0, 0, 8, 4};
    int B[4] = {5, 2, 6, 7};
    int C[4];

    interseccionRectangulos(A, B, C);

    cout << "Rectángulo intersección: {" << C[0] << ", " << C[1] << ", " << C[2] << ", " << C[3] << "}" << endl;

    return 0;
}
//Problema 16 Caminos

long long factorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función que calcula el número de caminos
long long caminos(int n) {
    return factorial(2 * n) / (factorial(n) * factorial(n));
}

int problema16() {
    int n;

    cout << "Ingrese el tamaño de la malla (n x n): ";
    cin >> n;

    long long resultado = caminos(n);
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << resultado << " caminos." << endl;

    return 0;
}

// Problema 17

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int problema17() {
    int limite;
    cout << "Ingrese un número: ";
    cin >> limite;

    int sumaTotal = 0;

    for (int a = 2; a < limite; a++) {
        int b = sumaDivisores(a);
        if (b != a && b < limite && sumaDivisores(b) == a) {
            sumaTotal += a;
        }
    }

    cout << "El resultado de la suma es: " << sumaTotal << endl;
    return 0;
}
// Problema 18
const int na = 10;

// Función para calcular factorial
int factoriale(int na) {
    int res = 1;
    for (int i = 2; i <= na; i++)
        res *= i;
    return res;
}

// Función para encontrar la n-ésima permutación
void encontrarPermutacion(int n) {
    int numeros[na] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool usados[na] = {false}; // Para marcar qué números ya han sido usados

    n = n - 1; // Convertir a índice base 0

    cout << "La permutación es: ";

    for (int i = na - 1; i >= 0; i--) {
        int f = factoriale(i);
        int index = n / f;
        n = n % f;

        // Buscar el dígito no usado en la posición 'index'
        int cuenta = -1;
        for (int j = 0; j < na; j++) {
            if (!usados[j])
                cuenta++;
            if (cuenta == index) {
                cout << numeros[j];
                usados[j] = true;
                break;
            }
        }
    }

    cout << endl;
}

int problema18() {
    int posicion;
    cout << "Ingrese la posición (1 a 3628800): ";
    cin >> posicion;

    if (posicion < 1 || posicion > 3628800) {
        cout << "Número fuera de rango. Debe estar entre 1 y 3628800." << endl;
    } else {
        encontrarPermutacion(posicion);
    }

    return 0;
}

int main() {

  /*ejercicio1();
   problema1();*/
    problema2();
    problema3();
    problema4();
    problema5();
    problema6();
    problema7();
    problema8();
    problema9();
    problema10();
    problema11();
    problema12();
    problema13();
    problema14();
    problema15();
    problema16();
    problema17();
    problema18();

    return 0;
}
