#include<stdio.h>
int findlargest(int arr[],int n){
	int largest=arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	return largest;
}

int main(){
	int n;
	printf("Enter your n:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter %d:",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	int largest=findlargest(arr,n);
	
	printf("the largest element of array is: %d\n",largest);
	
	return 0;
}
