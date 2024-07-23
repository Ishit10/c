#include<stdio.h>
// the struct 
struct car{
    char model[50];
    int year;
    float price;
};

int main(){
    // the number of car 
    int n;

    printf("enter the number of car:");
    scanf("%d",&n);

    struct car cars[n];
    for(int i=0; i<n; i++){
        printf("Enter details of car %d:\n", i + 1);

        printf("Model:");
        scanf("%s",cars[i].model);

        printf("Year:");
        scanf("%d",&cars[i].year);

        printf("Price:");
        scanf("%f",&cars[i].price);
    }
    // the details of cars 
    printf("\ncar detail:\n");
    for(int i=0; i<n; i++){
        printf("Car %d:\n", i + 1);
        printf("model:%s\n",cars[i].model);
        printf("year:%d\n",cars[i].year);
        printf("price:%f\n",cars[i].price);
    }


    return 0;
}