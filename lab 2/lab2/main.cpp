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
