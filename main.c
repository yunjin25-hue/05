#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//�ǽ� 1 
  int num;
  
  printf("Input an integer : ");
  scanf("%d",&num);
  
  if(num>0)
  
      printf("����Դϴ�.\n"); 
  
  else if(num<0)
  
      printf("�����Դϴ�.\n"); 
  else
  
      printf("0 �Դϴ�.\n"); 
  
  system("PAUSE");	
  return 0;
}
