#include<stdio.h>
void main(){
int num, sum;
printf("enter the numberupto which you want to add");
scanf("%d",&num);
sum=0;
int i=0;
while(i<=num){
    sum=sum+i;
    i++;
}
printf("\n%d",sum);
}
