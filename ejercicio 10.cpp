#include <stdio.h>
#include <string.h>
 
char pass[10];
int correcto;
int intento;
const char contrasena[]="1992"; /*1992 es la contraseña que se debe introducir*/
 
int main(void)
{
    intento=1;
    correcto=0;
    printf("Introduzca la contrasena: "); gets(pass); printf("\n");
    if (strcmp(pass,contrasena)==0) correcto=1;
    while ((correcto==0)&&(intento<3))
    {
        intento++;
        printf("Contrasena incorrecta. %i intento: ", intento); gets(pass); printf("\n");
        if (strcmp(pass,contrasena)==0) correcto=1;
    }
    if (correcto==0) printf("Se han excedido el numero de intentos.");
    else
        {
            printf("Bienvenido a la base de datos.");
            /*Aqui se puede poner lo que se quiera para que solo se tenga acceso en el caso de tener la contraseña*/
        }
    return 0;
}