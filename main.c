#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//�ǽ� 4
  
  int x;
  int i;
  int sum=0;
  
  printf("input a number : ");
  scanf("%d",&x);
  
  for(i=0;i<=x;i++)
   sum=sum+i;              //���Ǻ��� �� �ݺ������� ���� ����  
  
  printf("sum is %d\n",sum);
  
  system("PAUSE");	
  return 0;
}
