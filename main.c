#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	char c ;
	//65~90 대문자
	//97~122 소문자
	//48~57 숫자
	 
	printf("input a char : ");
	scanf("%c", &c); 
	
	if('0' <= c && c <= '9')
	{
		printf("this is number.");
	}
	
	else if('A'<= c && c<= 'Z')
	{
		printf("this is capital");
	}

	else if('a'<= c && c<= 'z')
	{
		printf("this is small letter.");
	}
	
	else 
	{
		printf("this is ect char");
	}
	
	return 0;
	}
