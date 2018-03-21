/*Maximum contiguous array sum
 By Amal Poulose amalpoulose95@hotmail.com   +919446047003*/
#include<stdio.h>
int main(void)
{
int a[100],i,j,k,n,start=0,end=0,sum=0,larg=0;
printf("\n---------------------*Maximum contiguous array sum*-------------------------\n");
printf("\n----------------------------------------------------------------------------\n");
printf("Array size : ");
scanf("%d",&n);
printf("Enter array elements : ");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("\n----------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
  {
    sum=0;
    for(k=i;k<=j;k++)
      sum=sum+a[k];
    if(sum>larg) 
    {
      start=i;
      end=j;
      larg=sum;
    }
   } 
}

printf("\n----------------------------------------------------------------------------\n");
printf(" Maximum contiguous array elements is : ");
for(i=start;i<=end;i++)
 printf(" %d ",a[i]);
printf("\n And sum is %d\n",larg);
printf("\n----------------------------------------------------------------------------\n");
return ;
}
