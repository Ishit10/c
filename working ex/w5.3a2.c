#include<stdio.h>
int mian(){
    int num1, num2, num3, min;
    printf("Enter your num1:");
    scanf("%d",&num1);
    printf("Enter your num2:");
    scanf("%d",&num2);
    printf("Enter your num3:");
    scanf("%d",&num3);
    
    min=(num1<num2)?(num1<num3?num1:num3) : (num2<num3?num2:num3);
    
    printf("The minimun number is %d\n",min);

    return 0;
}
