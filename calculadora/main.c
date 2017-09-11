#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    int flag=0;
    int flaguno=0;
    int flagdos=0;
    int flagtres=0;
    float res3;
    float res4;
    float res5;
    float res6;
    float res7;


    while(seguir=='s')
    {
        if(flaguno==1)
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
            printf("2- Ingresar 2do operando (B=y)\n");
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n");

            scanf("%d",&opcion);

        }
        else
        {
            if(flag==1)
            {
                printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
                printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");

                scanf("%d",&opcion);
                flagtres=1;

            }
            else
            {
                if(flagdos==1)
                {
                    printf("1- Ingresar 1er operando (A=x)\n");
                    printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
                    printf("3- Calcular la suma (A+B)\n");
                    printf("4- Calcular la resta (A-B)\n");
                    printf("5- Calcular la division (A/B)\n");
                    printf("6- Calcular la multiplicacion (A*B)\n");
                    printf("7- Calcular el factorial (A!)\n");
                    printf("8- Calcular todas las operacione\n");
                    printf("9- Salir\n");

                    scanf("%d",&opcion);
                }
                else
                {
                    printf("1- Ingresar 1er operando (A=x)\n");
                    printf("2- Ingresar 2do operando (B=y)\n");
                    printf("3- Calcular la suma (A+B)\n");
                    printf("4- Calcular la resta (A-B)\n");
                    printf("5- Calcular la division (A/B)\n");
                    printf("6- Calcular la multiplicacion (A*B)\n");
                    printf("7- Calcular el factorial (A!)\n");
                    printf("8- Calcular todas las operacione\n");
                    printf("9- Salir\n");

                    scanf("%d",&opcion);
                    if(opcion<1||opcion>9)

			{

				printf("!!Erro!! reingrese un numero valido.\n");
                    }
                	}
            }
        }
        switch(opcion)
        {
        case 1:
            numero1=operando1(numero1);
            flaguno=1;
            if(flagdos==1)
            {
                flag=1;
                flagdos=0;
                flaguno=0;
            }
            break;
        case 2:
            numero2=operando2(numero2);
            if(flaguno==1)
            {
                flag=1;
                flaguno=0;
            }
            else
            {
                flagdos=1;
            }
            break;
        case 3:
            if(flagtres!=1)
            {
                printf("para realizar la operacion debe registrar dos numeros en la opcion (1 y 2) \n");
            }
            else
            {
                res3=sumar(numero1,numero2);
                printf("%.2f \n",res3);

            }
            break;
        case 4:
            if(flagtres!=1)
            {
                printf("para realizar la operacion debe registrar dos numeros en la opcion (1 y 2) \n");
            }
            else
            {
                res4=restar(numero1,numero2);
                printf("%.2f \n",res4);
            }
            break;
        case 5:
            if(flagtres!=1)
            {
                printf("para realizar la operacion debe registrar dos numeros en la opcion (1 y 2) \n");
            }
            else
            {
                res5=division(numero1,numero2);
                printf("%.2f \n",res5);
            }
            break;
        case 6:
            if(flagtres!=1)
            {
                printf("para realizar la operacion debe registrar dos numeros en la opcion (1 y 2) \n");
            }
            else
            {
                res6=multiplicacion(numero1,numero2);
                printf("%.2f \n",res6);
            }
            break;
        case 7:
            if(flag==1)
            {
                printf("no se puede realizar la operacion con dos numeros ingresados.  \n");
            }
            else
            {
                if(flaguno==0)
                {
                    printf("para realizar esta operacion debe tener un numero cargados en la opcion 1. \n");
                }
                else
                {
                    res7=factorial(numero1);
                    printf("%.2f \n",res7);
                }
            }
            break;
        case 8:
            if(flag==0)
            {
                printf("para realizar esta operacion debe tener dos numeros cargados en ala opcion 1 y 2. \n");
            }
            else
            {
                if(flag==1)
                {
                    res3=sumar(numero1,numero2);
                    res4=restar(numero1,numero2);
                    res5=division(numero1,numero2);
                    res6=multiplicacion(numero1,numero2);
                    res7=factorial(numero1);
                    printf("la sumatoria de los numeros es: %.2f \n",res3);
                    printf("la resta de los numeros es: %.2f \n",res4);
                    printf("la divicion de los numeros es: %.2f \n",res5);
                    printf("la multiplicacion de los numeros es: %.2f \n",res6);
                    printf("el factorial es: %.2f \n",res7);

                }
            }

            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;

}


