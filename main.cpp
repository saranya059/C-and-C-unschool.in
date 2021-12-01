#include<stdio.h>

 struct Employee{
     char name[50];
     int id;
     int exp;
     int sal;
    }emp[5];

int main(){

   printf("Enter name,id,exp,sal of 5 employees\n");
   for(int i=0;i<5;i++){
    scanf("%s %d %d %d",&emp[i].name,&emp[i].id,&emp[i].exp,&emp[i].sal);
   }
   printf("\n\nEMPLOYEE NAME\tEMPLOYEE ID\tEMPLOYEE EXPERIENCE(yrs)\tEMPLOYEE SALARY");
   for(int i=0;i<5;i++){
        printf("\n %s \t\t%d \t\t\t%d \t\t\t\t%d",emp[i].name,emp[i].id,emp[i].exp,emp[i].sal);
   }
return 0;

}
