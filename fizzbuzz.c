#include<stdio.h>
int main()
{
	for(int i=1;i<=100;i++)
		{
			if(i%3==0)
        printf("fizz");
			if(i%5==0)
        printf("buzz");
      else if(i%3!=0 && 1%5!=0)
        printf("%d",i);
			printf("\n");
		}
  return 0;
}
