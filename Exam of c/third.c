#include<stdio.h>
void reversesring(char str[]){
    int length=0;
    int i;
    int t;

    // while loop
    while(str[length] != '\0'){
        length++;
    }

    // for loop
    for(i=0; i<length/2; i++){
        t=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=t;
    }
}

int main(){
    char str[100];
    // user enter str
    printf("Enter your str: ");
    scanf("%s",&str);

    //  call the function
    reversesring(str);
    // print the function
    printf("reverse is %s\n",str);

    return 0;
}