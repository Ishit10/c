#include <stdio.h>
int main(){
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	int a=0;
	int b=1;
	int next;
	
	printf("Fibonacci series up to %d terms:\n", n);
	
	for(int i=1; i<=n; i++){
		if(i==1){
			printf("%d",a);
			continue;
		}
		if(i==2){
			printf("%d",b);
			continue;
		}
		next=a+b;
		a=b;
		b=next;
		printf("%d",next);
	}
	
	
	return 0;
}
