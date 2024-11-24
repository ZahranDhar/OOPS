//Factorial Using Recursion

#include<stdio.h>

int factf(int x);
int main()
{

  int x,fact;

  printf("Enter the number");
  scanf("%d",&x);

  fact=factf(x);

  printf("The factorial of the number is %d",fact);

  return 0;
  
}

int factf(int x)
{
  if(x>1)
  {
    return x*(factf(x-1));
  }
  else
  {
    return 1;
  }
}

