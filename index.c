#include<stdio.h>
int swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


int main(){
	int a,b;
	
	printf("Enter your num1:");
	scanf("%d",&a);
	printf("Enter your num2:");
	scanf("%d",&b);
	
	printf("before swap: num1=%d, num2=%d\n",a,b);
	
	swap(&a,&b);
	
	printf("After swap: num1=%d, num2=%d\n",a,b);
	



	return 0;
}
