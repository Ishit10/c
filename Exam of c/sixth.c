#include<stdio.h>
int main(){
    //  name and course
    char name[50] ,course[50];
    FILE*file;
    //  data file open
    file=fopen("data.txt","w");
    if(file==NULL){
        printf("Error opning file\n");
        return 1;
    }

    for(int i=0; i<3; i++){
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter the course of student %d: ", i + 1);
        scanf("%s", course);

        fprintf(file,"student%d\n",i+1);
        fprintf(file,"name:%s\n",name);
        fprintf(file,"course:%s\n",course);
    }
    // data file close
    fclose(file);
    printf("Data written to data.txt successfully.\n");

    return 0;
}