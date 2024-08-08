#include<stdio.h>

void main(){

    int a,b,c,d;

    printf("Enter Fist number : ");
    scanf("%d",&a);

    printf("Enter Sacond number : ");
    scanf("%d",&b);

       printf("Enter Third number : ");
    scanf("%d",&c);

       printf("Enter Forth number : ");
    scanf("%d",&d);

    if(a>=b){

        if(a>=c){

            if(a>=d){
                printf("The largest number is Fist : %d",a);
            }else{
                 printf("The largest number is  Forth : %d",d);
            }
        }else{
              printf("The largest number is Third : %d",c);
        }


    }else{
       if(b>=c){

            if(b>=d){
                printf("The largest number is Sacond : %d",b);
            }else{
                 printf("The largest number is : %d",c);
            }
    }else{
               printf("The largest number is  Forth : %d",d);
    }


}
}
