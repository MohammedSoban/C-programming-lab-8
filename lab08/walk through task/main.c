#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,found,position,element;

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to be deleted\n");
    scanf("%d",&element);
    for(i=0;i<10;i++)
    {
        if(arr[i]==element)
        {
            found=1;
            position=i;
            break;
        }
    }
    if(found==1)
    {
        for(i=position;i<10;i++)
        {
            arr[i]=arr[i+1];
        }


    printf("the result array is\n");
     for(i=0;i<10-1;i++)
        {
            printf("%d\n",arr[i]);
        }

    }

    else
        printf("element is %d is not found in array\n",element);

    return 0;
}
