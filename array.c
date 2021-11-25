#include<stdio.h>
int main()
{
int i,n,a[50];
printf("\n\n\n to read and display elements of array \n");
printf("\n enter the size of an array:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n elements of array are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return(0);
}
