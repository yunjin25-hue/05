#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//�ǽ� 6
  
  int answer = 59;
  int num;
  int trial=0;
  
  do
  {
      printf("Guess a number : ");
      scanf("%d",&num);
      
      if(answer<num)
      {
       printf("high!\n");
       }
      else if(answer>num)
      {
       printf("low!\n");
      }
      trial=trial+1;
  }
  
  while(answer!=num); //�ݺ� ����  
  
  printf("Congratulation! trials : %d\n",trial);
  
  system("PAUSE");	
  return 0;
}
//�ϴ��� �غ��� ����� ��� ���Դ��� ���� ������ ã��  
