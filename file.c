#include <stdio.h>
#include <string.h>
int main(void){
FILE *f;
f = fopen(“{file name}”,”{opening type}”);
if (f==NULL){
printf(“file found !\n”);
}
else{
	printf(“issue with teh file ! \n”);
}
getch();
return 0;
}
