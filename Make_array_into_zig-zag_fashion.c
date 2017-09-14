
/*Make array into zig-zag fashion
 By Amal Poulose amalpoulose95@hotmail.com   +919446047003*/
#include<stdio.h>
int main(void)
{
int a[100],i,j,k,n;
printf("\n--------------------*Make array intoZig-Zag fashion*------------------------\n");
printf("\n----------------------------------------------------------------------------\n");
printf("Array size : ");
scanf("%d",&n);
printf("Enter array elements : ");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("\n----------------------------------------------------------------------------\n");
for(i=0;i<n-1;i++)
{
    if(i%2) 
    {
      if(a[i]<a[i+1])
        a[i]=a[i]+a[i+1]-(a[i+1]=a[i]);
    }
    else
    {
      if(a[i]>a[i+1])
        a[i]=a[i]+a[i+1]-(a[i+1]=a[i]);
    }
}
printf("\n----------------------------------------------------------------------------\n");
printf("Array elements in zig-zag fashionis : ");
for(i=0;i<n;i++)
 printf(" %d ",a[i]);
printf("\n");
printf("\n----------------------------------------------------------------------------\n");
return ;
}
