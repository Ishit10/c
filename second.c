#include<stdio.h>
int evenodd(int num){
	if(num%2==0){
		printf("it is even\n",num);
	}else{
		printf("it is odd\n",num);
	}
}

int main(){
	int number;
	
	printf("Enter your number");
	scanf("%d",&number);
	
	evenodd(number);
	
	
}
