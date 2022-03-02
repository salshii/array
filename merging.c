#include<stdio.h>
void main()
{
int array1[50],array2[50],array3[100],m,i,n,j,k=0;
printf("\n Enter the size of the 1st array:");
scanf("%d",&m);
printf("Enter the elements of 1st array:");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
printf("\n Enter the size 2nd array:");
scanf("%d",&n);
printf("\n Enter the elements of 2nd array:");
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(array1[i]<array2[i])
{
array3[k]=array1[i];
i++;
}
else
{
array3[k]=array2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j>n)
{
array3[k]=array2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
array3[k]=array1[i];
i++;
k++;
}
}
printf("\n After merging:\n");
for(i=0;i<m+n;i++)
{
printf("\n%d",array3[i]);
}
}
