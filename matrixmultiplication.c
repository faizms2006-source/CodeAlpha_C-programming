#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
 printf("\n Enter rows and columns for first matrix:");
 scanf("%d%d",&r1,&c1);
 printf("\n Enter rows and columns for second matrix:");
 scanf("%d%d",&r2,&c2);
 while(c1!=r2)
 {
   printf("\n Error!column of first matrix not equal to row of second");
   printf("\n Enter rows and columns for first matrix:");
   scanf("%d%d",&r1,&c1);
   printf("\n Enter rows and columns for second matrix:");
   scanf("%d%d",&r2,&c2);
 }
 printf("\nEnter elements of matrix 1:\n");
 for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
  {
    printf("Enter element a%d%d:",i+1,j+1);
    scanf("%d",&a[i][j]);
  }
 printf("\nEnter elements of matrix 2:\n");
 for(i=0;i<r2;i++)
  for(j=0;j<c2;j++)
  {
    printf("Enter element b%d%d:",i+1,j+1);
    scanf("%d",&b[i][j]);
  }
  
for(i=0;i<r1;i++)
 for(j=0;j<c2;j++)
 {
  mult[i][j]=0;  
 }
for(i=0;i<r1;i++)
 for(j=0;j<c2;j++)
 for(k=0;k<c1;k++)
 {
  mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
 }
printf("\n Resultant Matrix:\n");
for(i=0;i<r1;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d\t",mult[i][j]); 
  }  
  printf("\n");
 }
return 0;
}