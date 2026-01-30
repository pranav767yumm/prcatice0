#include "stdio.h"
//#include "conio.h"
struct data{
int id;
int cont;
char name[15];
};
//global var
int what;
int i;
int main(void){
struct data d[10];
//clrscr();
home:
printf("program executed \n");
printf("1. record employee data\n2. show emplyee data\n3. exit\n{1,2,3} : "),scanf("%d",&what);
printf("\n\n");
if(what==1){
for(i = 0 ; i < 3 ;i++){
	printf("enter id: "),scanf("%d",&d[i].id);
	printf("enter contact details: "),scanf("%d",&d[i].cont);
	printf("enter name: "),scanf("%s",&d[i].name);
	}
	
}
if(what == 2){
    if((d[0].id && d[0].name )!= NULL)
    {
	for( i = 0 ; i < 3 ; i++ ){
	printf("\nenter id: %d",d[i].id);
	printf("\nenter contact details: %d",d[i].cont);
	printf("\nenter name: %s",d[i].name);
	}
	printf("\n\n\n");
    }else{printf("error !\n");}
}
if(what==3){
return 0;
}
goto home;
scanf("%d");
return 0;
}
