#include<stdio.h>

void main (){
    char source[20]="ram",destination[20];
    int i;
   

    for(i=0;source[i]!='\0';i++){
       destination[i]=source[i];
    }


    destination[i]='\0';
    printf("the copied string is %s",destination);
}
