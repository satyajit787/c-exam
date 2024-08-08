#include <stdio.h>

void main(){

char operator;
float number1,number2,result;

printf("Enter divijan (+ , - , x , %) : ");
scanf("%c",&operator);

printf("Enter Fisr number : ");
scanf("%f",&number1);

printf("Enter divijan : ");
scanf("%f",&number2);

switch(operator){

    case '+':
        result=number1+number2;
        printf("\nResult : %.2f",result);

        break;

    case '-':
        result=number1-number2;
        printf("\nResult : %.2f",result);

        break;

    case 'x':
        result=number1*number2;
        printf("\nResult .2f",result);

        break;

    case '%':
        if(number2!=0){
            result=number1/number2;
            printf("\nResult : %.2f",result);

        }else{
            printf("Not Enter 0");
        }
        break;


       default:
       printf("Erroe");

}




}
