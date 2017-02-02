#include<stdio.h>
#include<stdlib.h>

void main()

{
int arr[20];
int i,n;
printf("Enter the value of n:");
scanf("%d",&n);

printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}

printf("Printing the elements in reverse order\n");
for(i=n-1;i>=0;i--)
{
 printf("%d", arr[i]);
}
printf("\n");
}
