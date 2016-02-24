#include<stdio.h>
#include</home/bossmool/ramesh/head.h>

 int sort1(int a[],int n)
{
int i,temp,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
 temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return;
}
