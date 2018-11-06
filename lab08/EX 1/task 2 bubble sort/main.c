#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[6],i,j,k,temp;
 for(i=0;i<6;i++)
 {
     scanf("%d",&arr[i]);
 }
for(i=0;i<6;i++)
  {
    for(j=i+1;j<6;j++)
    {
    if(arr[i]>arr[j])
     {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;

     }
    }
  }
  for(i=0;i<6;i++)
  {
      printf("arranged order");
      printf("%d\n",arr[i]);
  }

    return 0;
}
