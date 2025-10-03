#include<stdio.h>
int main()
{
 int num1,num2;
 char operator;
 printf("Enter an operator(+-*/%):");
 scanf("%c",&operator);
 printf("Enter the first and second number :");
 scanf("%d%d",&num1,&num2);
 switch(operator)
 {
  case'+':printf("Result is %d",num1+num2);break;     
  case'-':printf("Result is %d",num1-num2);break;
  case'*':printf("Result is %d",num1*num2);break;
  case'/':printf("Result is %d",num1/num2);break;
  case'%':printf("Result is %d",num1%num2);break;
  default:printf("Error!!Incorrect opertor");
 }
}