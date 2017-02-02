//Write a program in C to copy the elements one array into another array
#include<stdio.h>
#include<stdlib.h>

void main()
{
int i,j,k;

int arr[100];
int arr1[100];
printf("Enter the array elements");
for(i=0;i<5;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<5;i++)
{

 arr1[i]=arr[i];
}


printf("The second array is\n");
for (i=0;i<5;i++)
{
printf("%d\n", arr1[i]);
}
printf("The first array is\n");
for (i=0;i<5;i++)
{
    printf("%d", arr[i]);

}
}
