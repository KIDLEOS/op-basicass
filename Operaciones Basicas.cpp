
#include <stdio.h>

operaciones() {
    float suma, resta, multiplicacion, division;
    float a = 10.5, b = 3.5, c = 5.5, d = 2.5;

    suma = a + b + c + d;
    resta = a - b - c - d;
    multiplicacion = a * b;
    division = a / b;

    printf("Operaciones b�sicas con variables:\n");
    printf("Suma: %f\n", suma);
    printf("Resta: %f\n", resta);
    printf("Multiplicaci�n: %f\n", multiplicacion);
    printf("Divisi�n: %f\n", division);
}

int main() {
    operaciones();
}

