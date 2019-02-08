#include <stdio.h>

int main() {
	char c;
	scanf(" %c",&c);
	
	if(c== 'a' || c=='e' || c=='i' || c=='o' || c=='u')
	{
		printf("%c ia a vowel",c);
		
	}
	else
	{
		printf("\ninvalid alp");
	}
	
	return 0;
}
