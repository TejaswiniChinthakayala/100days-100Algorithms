#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
   int *arr=(int*)malloc(100*sizeof(int));
   int i,first,last,mid,n,search;
   printf("\n Enter number of elements--");
   scanf("%d", &n);
   printf("\n Enter %d integers--",n);
   for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
   }
   printf("\n Enter the search element--");
   scanf("%d", &search);
   first= 0;
   last= n - 1;
   mid= (first+last)/2;
   while (first <= last){
      if(arr[mid] < search)
	 first= mid + 1;
      else if (arr[mid] == search){
	 printf("\n %d found at location %d",search,mid+1);
	 break;
      }
      else
	 last = mid - 1;
	 mid= (first + last)/2;
   }
   if(first > last)
      printf("\n Not found! %d isn't present in the list",search);
   return 0;
}
