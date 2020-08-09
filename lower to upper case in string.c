#include <stdio.h>
int main()
{
   char S[50],c=0;
   printf("Enter a string to convert it into lower case:\n");
   gets(S);
   while (S[c] != '\0')
    {
      if (S[c] >= 'a' && S[c] <= 'z')
      {
         S[c] = S[c]-32;
      }
      c++;
    }
   printf("The string in upper case:\n%s",S);
   return 0;
}
