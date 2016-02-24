#include<stdio.h>
#include</home/bossmool/ramesh/head.h>
extern int sort1(int a[],int n);


void main()
{
int i,n;
int a[10];
printf("enter the size");
scanf("%d",&n);
printf("give arry elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort1(a,n);

}
