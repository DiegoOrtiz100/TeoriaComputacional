#include <stdio.h>
// Funci�n para realizar la multiplicaci�n rusa
int russianMultiplication(int a, int b) {
int result = 0; // Inicializa la variable result para almacenar el resultado
// Bucle mientras a sea mayor que 0
while (a > 0) {
// Si a es impar, agrega b al resultado parcial
if (a % 2 == 1) {
result += b;
//= 2; // Divide a entre 2 (desplazamiento binario hacia la derecha)
b *= 2; // Duplica b (desplazamiento binario hacia la izquierda)

}
return result;
}

int main()
 {
int numl, numz;
printf("Ingrese dos n�meros enteros: ");
scanf ("%d %d", &num1, &num2); // Lee dos n�meros enteros ingresados por el usuario int result = russianMultiplication (num1, num2); // Calcula la multiplicaci�n rusa printf("Resultado: %d\n", result); // Muestra el resultado final
return 0; // Indica que el programa ha finalizado correctamente
}
