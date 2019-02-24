/**
 * \file            main.c
 * \brief           03. Operadores - Ejemplo 8 - Operador sizeof()
 * \author          Javier Balloffet
 * \date            10-SEP-2018
 * \details         Ver README para compilar, linkear y ejecutar
 */

#include <stdio.h>

int main() {
    /* 1. Declaracion de variables */
    int a;
    float b;
    double c;
    char d;

    /* 2. Realizo la operación sizeof() */
    printf("Tamaño de variable entera (int) = %ld bytes\n", sizeof(a));
    printf("Tamaño de variable decimal (float) = %ld bytes\n", sizeof(b));
    printf("Tamaño de variable decimal de doble precision (double) = %ld bytes\n", sizeof(c));
    printf("Tamaño de variable caracter (char) = %ld byte\n", sizeof(d));

	return 0;
}
