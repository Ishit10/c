#include<stdio.h>
int main(){
    int size;
    // enter your size
    printf("Enter your size:");
    scanf("%d",&size);
    // enter youe arr
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d is your arr",&arr[i]);
    }
    int max=arr[0];
    // find max
    
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d is your max",max);

    return 0;
}