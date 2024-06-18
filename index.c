#include<stdio.h>
int swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;

	printf("After swap: num1=%d, num2=%d\n",a,b);
}


int main(){
	int a,b;
	
	printf("Enter your num1:");
	scanf("%d",&a);
	printf("Enter your num2:");
	scanf("%d",&b);
	
	printf("before swap: num1=%d, num2=%d\n",a,b);
	
	swap(a,b);
	
	
	



	return 0;
}
