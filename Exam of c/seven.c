#include<stdio.h>
int main(){
    int n;
    printf("enetr your n:");
    scanf("%d",&n);
    int i,j;
    for(i=1; i<n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",i*i);
        }
        printf("\n");
    }

    return 0;
}