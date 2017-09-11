
float operando1(float numero1)
{

    printf("ingrese A= ");
    scanf("%f",&numero1);

    return numero1;
}
float operando2(float numero2)
{
    printf("ingrese B= ");
    scanf("%f",&numero2);

    return numero2;
}
float sumar (float numero1,float numero2)
{
    float resultado;

    resultado=numero1+numero2;

    return (resultado);
}
float restar (float numero1,float numero2)
{
    float resultado;

    resultado=numero1-numero2;

    return (resultado);
}
float multiplicacion (float numero1,float numero2)
{

    float resultado;

        resultado=numero1*numero2;

        return (resultado);


}
float division(float numero1,float numero2)
{
    float respuesta;

    while(numero2==0)
    {
        int respuesta;

        printf("reingrese numero");
        scanf("%f",&numero2);

        if(numero2!=0)
        {
            respuesta=numero1/numero2;
             return (respuesta);
        }
    }
    respuesta=numero1/numero2;

    return(respuesta);
}
float factorial(float numero1)
{
    float resultado;

    if(numero1==0)
    {
        return 1;
    }
    else
    {
        resultado=numero1*factorial(numero1-1);
        return (resultado);
    }
}
