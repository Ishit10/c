#include <stdio.h>
int main(){
    int n;
    printf("enter your n:");
    scanf("%d",&n);
    
    while(n>=1){
        if(n%2!=0){
        printf("%d ",n);
        }
        n--;
        
    }

    return 0;
}