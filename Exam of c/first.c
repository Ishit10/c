#include <stdio.h>
int main(){
    char ch;
    // enter character
    printf("Enter your ch:");
    scanf("%c",&ch);
    // switchcase
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is vowel \n",ch);
        break;
        default:
        printf("%c is consonent \n",ch);
    }


    return 0;
}