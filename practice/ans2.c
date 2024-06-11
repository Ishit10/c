#include <stdio.h>
int main(){
    int num1,num2;
    char oparation;
    float r;

    // integer num1 and num2
    printf("Enter your num1: ");
    scanf("%d",&num1);

    printf("Enter your num2: ");
    scanf("%d",&num2);

    // char oparation
    printf("Enter your arithmetic oparation:");
    scanf("%d",&oparation);

    // switch case
    switch(oparation){
        case '+':
        r=num1+num2;
        printf("r:%d+%d=%.2f",num1,num2,r);
        break;

         case '-':
        r=num1-num2;
        printf("r:%d-%d=%.2f",num1,num2,r);
        break;

         case '*':
        r=num1*num2;
        printf("r:%d*%d=%.2f",num1,num2,r);
        break;

         case '/':
        r=num1/num2;
        printf("r:%d/%d=%.2f",num1,num2,r);
        break;

        default:printf("Invalid arthmetic oparation");
        break;
    }

    return 0;
}