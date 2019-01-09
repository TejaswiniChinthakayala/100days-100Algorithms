#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int *arr=(int*)malloc(100*sizeof(int));
int key,size,i,flag=0;
printf("enter array size\n");
scanf("%d",&size);
printf("enter key element\n");
scanf("%d",&key);
//reading element of array with given size
printf("enter elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
//checking entered element with key element
if(arr[i]==key)
{
flag=1;
break;
}
}
if(flag==1)
printf("key found\n");
else
printf("key not found\n");
getch();
return 0;
}
