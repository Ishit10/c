#include <stdio.h>
 
 int mian(){
    int n;
    printf("enter your n:");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
 }