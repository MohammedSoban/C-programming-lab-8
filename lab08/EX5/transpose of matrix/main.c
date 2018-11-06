
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,array[3][3],array1[3][3],l,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n\n");
    }
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          array1[j][i]=array[i][j];
      }
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("\t%d",array1[i][j]);
      }
      printf("\n\n");
  }


    return 0;
}
