#include <stdio.h>
#include <stdlib.h>

// Función para ordenar los dígitos de un número en orden ascendente
int ascendingOrder(int n) {
   int arr[4];
   for (int i = 0; i < 4; i++) {
       arr[i] = n % 10;
       n /= 10;
   }
   // Ordenar los dígitos en orden ascendente (burbuja)
   for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 3; j++) {
           if (arr[j] > arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
   return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}

// Función para ordenar los dígitos de un número en orden descendente
int descendingOrder(int n) {
   int arr[4];
   for (int i = 0; i < 4; i++) {
       arr[i] = n % 10;
       n /= 10;
   }
   // Ordenar los dígitos en orden descendente (burbuja)
   for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 3; j++) {
           if (arr[j] < arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
   return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}

int main() {
   int num;
   printf("Ingresa un número de cuatro dígitos (al menos dos deben ser diferentes): ");
   scanf("%d", &num);

   if (num < 1000 || num > 9999) {
       printf("El número debe tener cuatro dígitos.\n");
       return 1;
   }

   int kaprekar = 6174;
   int iteraciones = 0;

   while (num != kaprekar) {
       int ascendente = ascendingOrder(num);
       int descendente = descendingOrder(num);
       num = descendente - ascendente;
       printf("%d - %d = %d\n", descendente, ascendente, num);
       iteraciones++;
   }

   printf("Se alcanzó la constante de Kaprekar (6174) en %d iteraciones.\n", iteraciones);

   return 0;
}
