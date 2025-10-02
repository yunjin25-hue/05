#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
//실습 6
  
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
  
  while(answer!=num); //반복 조건  
  
  printf("Congratulation! trials : %d\n",trial);
  
  system("PAUSE");	
  return 0;
}
//일단은 해보고 결과가 어떻게 나왔는지 보고 문제점 찾기  
