#include<stdio.h>
#include<ctype.h>

int main()
{
	int new_char;
	char t;
	int ctr=0;
	char str[100];
    printf(" Input a string : ");
	fgets(str, sizeof str, stdin);
    printf(" Input replace character : ");
	scanf("%c",&t);
	printf(" After replacing the space with  %c the new string is :\n",t);
	while (str[ctr])
	{
		new_char=str[ctr];
		if (isspace(new_char))
		new_char=t;
		putchar (new_char);
		ctr++;
	}
	printf("\n\n");
	return 0;
}
