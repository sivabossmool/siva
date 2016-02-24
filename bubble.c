#include<stdio.h>
void main()
{
int n;
int a[10];
int i=0,temp=0,j;
printf("enter the size");
scanf("%d",&n);
printf("give arry elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
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
}
