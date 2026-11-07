#include <stdio.h>
float score[]={78.3,85.2,91,63,71.3,53,64,48,92};
int Data[3][3]={7,9,5,6,4,2,8,10,1};
int i,j,n;
int main()
{
    n=sizeof(score)/sizeof(score[0]);
//printf("array size: %d \n",n);
    for(int i=0;i<n;i++){
      printf(" %.2f \n",score[i]);
    }
 printf("==== Array 2 Dimension==== \n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         printf(" %d ",Data[i][j]);
      }
      printf("\n");
   }
  int MyArray[4][3]={5,12,35,20,41,63,10,6,7,14,9,11};
  printf("==== Array 2 Dimension 4x3 ==== \n");
   for(i=0;i<4;i++){
      for(j=0;j<3;j++){
         printf(" %d ",MyArray[i][j]);
      }
      printf("\n");
   }
}
