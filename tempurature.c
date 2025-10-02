#include<stdio.h>
int main (){
    int condation;
    float  celsius , Fahrenheit , temperature;

    //This is a headinf of program.
    printf("CONVERSION TEMPERATURE : \n\n");

    //take input value the user .
    printf("Enter Temareture Value :  ");
    scanf("%f",&temperature);

    //Condition of program .
    printf("If you want value in Fahrenheit , so Enter 1 ,, And If you want value in Celsius  , so Enter 2 : ");
    scanf("%d",&condation);

    //formula of celsius.
     Fahrenheit = temperature * 9/5 + 32;

    //formula of fahrenheit.
    celsius = (temperature-32)*5/9;

    // if - else condition.
    if(condation == 1)
        printf("Fahrenheit = %f F",Fahrenheit); 

    else {
        printf("Celsius = %f C", celsius);
    }
    
}