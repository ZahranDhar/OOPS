//Banking System

#include<stdio.h>

int main()
{
  int x,bal=0,amt=0;

  do
  {
    printf("Press 1 to check balance.\nPress 2 to deposit.\nPress 3 for withdrawal.\nPress 4 for exit.\n");
    scanf("%d",&x);

    switch(x)
    {
      case 1:
      printf("The balance is:%d\n",bal);
      break;

      case 2:
      printf("Enter the amount to deposit:\n");
      scanf("%d",&amt);
      if(amt>0)
      {
        bal=bal+amt;
        printf("The process was successful.\n");
      }
      else
      {
        printf("ERROR\n");
      }
      break;

      case 3:
      printf("Enter the amount you want to withdraw.\n");
      scanf("%d",&amt);
      if(amt<=bal)
      {
        bal=bal-amt;
        printf("The process was successful.\n");
      }
      else
      {
        printf("ERROR\n");
      }
      break;

      case 4:
      printf("Thank you for your time.\n");
      return 0;

      default:
      printf("ERROR\n");
      break;
    }
  } while (x!=4);
  
}