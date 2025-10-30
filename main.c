#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[])
{
  int i, average;
  int sum=0;
  int grade[SIZE];
   
    sum=0;

   printf("%i명 점수를  입력하세요:\n",SIZE);

   for(i=0;i<SIZE;i++)
  { 
    scanf("%d", &grade[i]);
    sum+=grade[i];
}
    
  average=sum/SIZE;
  printf("성적 평균:%d\n",average);
    
  system("PAUSE");	
  return 0;
}
