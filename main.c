#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i;
	int q;
	int t;
	
	q=59;
	t=1;
	
	do
	{
	printf("input number : ");
	scanf("%d", &i);
			{
			if(i > q)
			{printf("high!\n");
			t++;
			}
		
			else if(i < q)
			{printf("low!\n");
			t++;
			}
		
	
		
			else
			{printf("congraturation!\n");
			}
		}
	}
	while(i != q);

printf("you tried %i\n", t);

	return 0;
	}
