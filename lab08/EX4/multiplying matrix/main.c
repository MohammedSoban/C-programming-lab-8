#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first[3][3],second[3][3],multiply[3][3],i,j,k,sum=0;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",first[i][j]);

        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",second[i][j]);

        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
              sum=sum+first[i][k]*second[k][j];
            }
                multiply[i][j]=sum;
                sum=0;
        }

    }
    printf("the product is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",multiply[i][j]);

        }
        printf("\n\n");
    }


    return 0;
}
