#include<stdio.h>
void main()
{
	int i,c1,c2;
	for(i=1;i<=100;i++)
		{
			c1=0;c2=0;
			printf("\n");
			if(i%3==0)
				c1++;
			if(i%5==0)
				c2++;
			if(c1==0&&c2==0)
				printf("%d",i);
			if(c1==1&&c2==0)
				printf("fizz");
			if(c1==0&&c2==1)
				printf("buzz");
			if(c1==1&&c2==1)
				printf("fizzbuzz");
		}
}
