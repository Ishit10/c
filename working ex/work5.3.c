#include<stdio.h>
int main(){
    int firstNumber,secondNumber,min;
    printf("Enter firstNumber: ");
    scanf("%d",&firstNumber);
    printf("Enter secondNumber: ");
    scanf("%d",&secondNumber);

    if(firstNumber<secondNumber){
        min=firstNumber;
    }else{
        min=secondNumber;
    }
    printf("the minmum number is: %d",min);

    return 0;
}