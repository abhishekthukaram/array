#include<stdio.h>
#include<stdlib.h>

void main(){

int a[1024];
int count =0;
int i,j,n;

printf("Enter the value of n:");
scanf("%d", &n);
for (i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
   for (j=i+1;j<n;j++)
   {
    if(a[i]==a[j])
    {
        count=count+1;
        break;
    }
   }
}
printf("The total number of duplicate elements are %d", count);


}
