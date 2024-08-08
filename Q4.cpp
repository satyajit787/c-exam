#include <stdio.h>

void main(){

char ch;

printf("Enter : ");
scanf("%c",&ch);

if((ch>='a' && ch<='z' || ch>='A' && ch<='Z')){

    printf("'%c' is the alphabet",ch);
}else if(ch>='1' && ch<='9'){
       printf("'%c' is the digit",ch);
}else{
       printf("'%c' is the special character",ch);
}

}
