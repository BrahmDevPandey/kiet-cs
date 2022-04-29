// program to demo the concept of using enum in C
#include<stdio.h>

enum boolean
{
  false,true
};

enum boolean isEven(int x)
{
  if(x%2==0)
    return true;
  else
    return false;
}

void main()
{
  int n;
  enum boolean result;
  printf("Enter a Number: ");
  scanf("%d",&n);
  result=isEven(n);
  if(result)
    printf("%d is Even Number\n",n);
  else
    printf("%d is Odd Number\n",n);
 }