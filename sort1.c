#include<stdio.h>
#include</home/bossmool/ramesh/head.h>

 int sort1(int a[],int n)
{
int i=0,temp=0,j;
for(i=0;i<(n-1);i++)
for(j=0;j<(n-i-1);j++)
{
if(a[j]>=a[j+1])
{
 temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return;
}
