#include <stdio.h>
void main()
{
  int array[3][3],i,j;
  
       printf("Read a 2D array of size 3x3 and print the matrix :\n");  
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&array[i][j]);
      }
  }  
    printf("\nThe matrix is : \n");
    for(i=0;i<3;i++)
  {
      printf("\n");
	   for(j=0;j<3 ;j++)
	     printf("% 4d",array[i][j]);
	    printf("\n");
  }
  {
  	for(i = 0; i < 3; i++)
    {
   		Sum = Sum + array[i][j];
    }
  }
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
