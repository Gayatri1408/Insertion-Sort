#include<stdio.h>
int main(){

   /* Here i & j for loop counters, temp for swapping,
    * count for total number of elements, number[] to
    * store the input numbers in array. You can increase
    * or decrease the size of number array as per requirement
    */
   int i, j, count, temp, a[25];

   printf("Enter the size of array: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   // This loop would store the input numbers in array
   for(i=0;i<count;i++)
   {
      scanf("%d",&a[i]);
   }

   // Implementation of insertion sort algorithm
   for(i=1;i<count;i++)
   {
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
      {
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",a[i]);

   return 0;
}