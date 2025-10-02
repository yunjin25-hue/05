#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//½Ç½À 2
  
  int x;
  
  printf("input an integer : ");
  scanf("%d",&x);
  
  if(x>0)
   printf("absolute is %d",x);
  else if(x<0)
   printf("absolute is %d",-x);
  
  system("PAUSE");	
  return 0;
}
