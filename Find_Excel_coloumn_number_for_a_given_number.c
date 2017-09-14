/*Find Excel coloumn number for a given number
 By Amal Poulose amalpoulose95@hotmail.com +919446047003*/

#include<stdio.h>
void excel(int);
int main(void)
{
int n;
char ch;
do
{
system("clear");
printf("\n--------------------------*Excel Coloumn number*------------------------\n");
printf("Enter the number : ");
scanf("%d",&n);
printf("\n------------------------------------------------------------------------\n");
printf("\nExcel number corresponding to %d is : ",n);
excel(n);
printf("\n");
printf("\n------------------------------------------------------------------------\n");
printf("Do you want to continue?(Y/N) : ");
scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');
system("clear");
return 0;
}

void excel(int m)
{
 int v;
 if(m)
 {
 v=m%26;
 excel((m-1)/26);
 if(v==0)
    v=25;
 else v--;
 printf("%c",65+v);
 }
 }
