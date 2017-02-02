#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[5];
int i,n;
printf("Enter the value of n:");
scanf("%d" ,&n);

printf("Input the Elements in this array\n");
for(i=0;i<=n;i++)
{
  scanf("%d", &arr[i]);
}

printf("Printing the elements of the array\n");
for(i=0;i<=n;i++)
{
printf("%d", arr[i]);
}
}
