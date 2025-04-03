#include <iostream>
using namespace std;

void fun_a(int *px, int *py); void
fun_b(int a[], int tam);
int ejercicio1()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
}
void fun_a(int *px,int*py){ int
        tmp = *px;
    *px = *py;
    *py = tmp;
}
void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);

    }
}



//ejercicio2();
void fun_c(double *a, int n, double *promedio, double *suma)
{
    *suma = 0.0;
    for (int i = 0; i < n; i++) {
        *suma += a[i];  // o *(a + i)
    }
    *promedio = *suma / n;
}

// ejercicio3();
unsigned short b[4][2] = {
    {77, 50},
    {5, 2},
    {28, 39},
    {99, 3}
};
// EJERCICIO 1 monedas colocar en arduino
/*
int main  () {

    int monedas[] = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    int contar [10] = {0};
    int canti, falta;

    cout << "ingrese cuanto dinero desea contar" <<endl;
    cin >> canti;

    falta = canti;

    for ( int a= 0; a < 10; a++)
    {contar [a] = falta / monedas [a];
        falta = falta % monedas [a]; }

    cout << " numero de billetes y monedas ";
    for (int a = 0 ; a < 10; a++)
    {cout << monedas [a] << " : " << contar [a] << endl;}
    return 0;
}
// EJERCICIO 2 aleatorias letras
#include <cstdlib>
#include <ctime>

int main  () {

const int TAM = 200;
char letras[TAM];
int conteo[26] = {0};

srand(time(0));

for (int i = 0; i < TAM; i++) {
letras[i] = 'A' + rand() % 26;
conteo[letras[i] - 'A']++; }

cout << "Arreglo generado:\n";
for (int i = 0; i < TAM; i++) {
cout << letras[i];
if ((i + 1) % 50 == 0) cout << endl; }

cout << "\n\nConteo de letras:\n";
for (int i = 0; i < 26; i++) {
if (conteo[i] > 0) {
cout << char('A' + i) << ": " << conteo[i] << endl;}
}
return 0;
}
*/ // EJERCICIO 3
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

int main() {
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

int convertirCadenaANumero(const char* cadena) {
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
/*// Ejercicio 4
int main() {
    char cadena[100];

    cout << "Ingrese una cadena de números (ej. 123): ";
    cin >> cadena;

    int numero = convertirCadenaANumero(cadena);

    if (numero != -1) {
        cout << "La cadena convertida es el número: " << numero << endl;
    } else {
        cout << "Error: la cadena contiene caracteres no numéricos." << endl;
    }

    return 0;
}
/* b = primer sub arreglo o b[0] también se puede expresar como b== &b[0]
 * b+2 = Esto seria b[2], como contamos desde 0 seria la tercera fila {28,39}
 * *(b+2) = quita la referencia de  b+2 entonces *(b+2) == b[2] que seria el 28
 * *(b+2) +1 toma el arreglo el anterior b[2], y lo mueve una posición queda en la dirección de 39
 * *(*(b+2)+1) quita la referencia y da el valor b[2][1] sería 39
 * b[3][1] entra a la última posición seria 3
 * *b++ (77)


int main() {
    ejercicio1();  // modo depurador dirección del array 0x8007fffe20
    // ejercicio2();  // corrregir evrsión void
    // ejercicio3(); punteros y matriz
    return 0;
}
*/
