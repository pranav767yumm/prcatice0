#include <stdio.h>
int a,b;
char txt[100];
int main(void){
    printf("your age ? :"),scanf("%d",&a);
    printf("file handling concept\n");
    FILE *f;
    f = fopen("text.txt","a");
    if(f==NULL){
        printf("error with file ! \n");
        return 1;
    }else{
        printf("no issue opening the file ! \n");
    }
    int score;
    score = 20;
    fprintf(f," score : %d \n",a);
    fclose(f);
    return 0;
}
