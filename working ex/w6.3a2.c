#include <stdio.h>
int main(){
    int n;
    int f=1;
    printf("Enter your n:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        f*=i;
    }
    printf("%d",f);

    return 0;
}