#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//실습 1 
  int num;
  
  printf("Input an integer : ");
  scanf("%d",&num);
  
  if(num>0)
  
      printf("양수입니다.\n"); 
  
  else if(num<0)
  
      printf("음수입니다.\n"); 
  else
  
      printf("0 입니다.\n"); 
  
  system("PAUSE");	
  return 0;
}
