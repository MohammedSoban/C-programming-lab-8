#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[6],search,first,last,middle;
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("enter the value to be find:\n");
        scanf("%d",&search);
        first=0;
        last=6-1;
        middle=(first+last)/2;

        while(first <= last)
        {
            if(arr[middle] < search)
                first=middle+1;
            else if(arr[middle] == search)
            {
                printf("%d found at location %d\n",search,middle+1);
                break;
            }
            else
                last=middle-1;
            middle = (first+last)/2;
        }
        if(first>last)
            printf("not found %d not in the list\n",search);


    return 0;
}
