#include <stdio.h>
// function of pointer
int square(int *arr,int size){
    for(int i=0; i<size; i++){
        *(arr+i)=(*(arr+i))*(*(arr+i));
    }
}

int main(){
    // user enter your size
    int size;
    printf("Enter your size:");
    scanf("enter your size %d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    // call the function
    square(arr,size);
    for(int i=0; i<size; i++){
        printf("%d is the square \n",arr[i]);
    }
    printf("\n");

    return 0;
}