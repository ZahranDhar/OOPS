//Numerical To Word Conversion Using Pointers//

#include<stdio.h>
#include<string.h>

void numtoword(int x, char p[]);
int main()
{
    char arr[20][8],(*s)[8]=arr,(*j)[8];
    int x,i;
    
    printf("Enter a number.\n");
    scanf("%d",&x);
    
    i=0;
    while(x>0)
    {
    numtoword(x%10,&arr[i]);
    x=x/10;
    i++;
    }
    i--;
    
    for(j=&arr[i];j>=s;j--)
    {
    printf("%s ",*j);
    }
    
}

void numtoword(int x, char p[])
{
  switch (x)
  {
    case 0:
    strcpy(p,"Zero");
    break;
    
    case 1:
    strcpy(p,"One");
    break;

    case 2:
    strcpy(p,"Two");
    break;

    // case 3:
    // strcpy(*p,"Three");
    // break;

    // case 4:
    // strcpy(*p,"Four");
    // break;

    // case 5:
    // strcpy(*p,"Five");
    // break;

    // case 6:
    // strcpy(*p,"Six");
    // break;

    // case 7:
    // strcpy(*p,"Seven");
    // break;

    // case 8:
    // strcpy(*p,"Eight");
    // break;

    // case 9:
    // strcpy(*p,"Nine");
    // break;

  }
}