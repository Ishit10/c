#include<stdio.h>
int main(){
    int arr[5];
    printf("your index 0 is :");
    scanf("%d",&arr[0]);
     printf("your index 1 is :");
    scanf("%d",&arr[1]);
     printf("your index 2 is :");
    scanf("%d",&arr[2]);
     printf("your index 3 is :");
    scanf("%d",&arr[3]);
     printf("your index 4 is :");
    scanf("%d",&arr[4]);
    for(int i=0;i<6;i++){
        printf("%d\n",arr[i]+arr[i]);
    }
    

    return 0;
}