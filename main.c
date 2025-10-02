#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//실습 4
  
  int x;
  int i;
  int sum=0;
  
  printf("input a number : ");
  scanf("%d",&x);
  
  for(i=0;i<=x;i++)
   sum=sum+i;              //조건보다 뭘 반복할지를 먼저 생각  
  
  printf("sum is %d\n",sum);
  
  system("PAUSE");	
  return 0;
}
