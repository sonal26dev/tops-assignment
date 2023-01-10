/*Patterns
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *            */
#include<stdio.h>
int main()
{
    int m = 5;
    for (int i = 0; i < m;i++)
    {
      for (int j = 0; j < m -i- 1;j++)
      {
        printf("  ");
      }
       
      for (int k = 0; k < 2 * i + 1;k++)
      {
        printf(" *");
      }
       
    
    printf("\n");

  }
  return 0;
}
  