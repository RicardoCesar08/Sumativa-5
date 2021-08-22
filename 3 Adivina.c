#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C que permita la usuario adivinar una palabra secreta.
El usuario tiene un máximo de 3 intentos para lograrlo. Los intentos ejecutados por el usuario deben aparecer en pantalla.*/

int main()
{
    int numsec= 842003;
    int intento;
    int numDeintento = 3;
    int limiteDeintentos = 0;
    int intentosRestante = 0;

    printf("Intenta adivinar el numero secreto\n\n");
    printf("pista: Tiene 6 digitos \n\n");

    while(intento != numsec && intentosRestante == 0){
        if (numDeintento > limiteDeintentos){
            scanf("%d", &intento);
            numDeintento--;
            printf("intentos restante %d\n\n", numDeintento);
        }else{
            intentosRestante = 1;
        }
    }

    if(intentosRestante == 1){
        printf("lo siento ya no tienes mas intentos\n\n");
    }else{
        printf("Felicidades %d era el numero secreto\n\n",intento);
    }
    return 0;
}
