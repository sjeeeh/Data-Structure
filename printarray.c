#include<stdio.h>
void main(){
int i,val[5];
printf("Enter 5 integers : ");
for(i=0;i<5;i++)
scanf("%d",&val[i]);
printf("Array....\n");
for(i=0;i<5;i++)
printf("%d  ",val[i]);
}
