#include <stdio.h>
int main()
{
	char c;
	printf("Enter any character:");
	scanf("%c",&c);
	if(c>='A'&& c<='Z'){
		printf("Character is in uppercase");
	}else if(c>='a'&& c<='z'){
		printf("Character is in lowercase");
	}else{
		printf("Special character");
	}
	printf("\nAayushma Kafle");
	return 0;
}
