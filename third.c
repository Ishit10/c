#include <stdio.h>
int decimaltobinary(int n){
    int binary[50];
    
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
       
    }
    for(int j=0; j<i; j++){
        printf("%d",binary[j]);
    }
}

int main(){
    int n;
    printf("Enter your n:");
    scanf("%d",&n);

    decimaltobinary(n);

    return 0;
}