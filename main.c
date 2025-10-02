#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//실습 5
  
  int x,y;
  char z;
  
  printf("enter the calculation : ");
  scanf("%d %c %d",&x,&z,&y);
  
  if(z=='+')
   printf("%d + %d = %d\n",x,y,x+y);
  else if(z=='-')
   printf("%d - %d = %d\n",x,y,x-y);
  else if(z=='*')
   printf("%d * %d = %d\n",x,y,x*y);
  else if(z=='/')
   printf("%d / %d = %d\n",x,y,x/y);
  
  system("PAUSE");	
  return 0;
}

/*case 사용 시 
switch(z)
{
  case '+';
    result=a+b;
    break;
  case '-';
*/
