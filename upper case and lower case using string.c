Q. Upper case and lower case using string?
   
#include <stdio.h>
int main()
{
   char s[50],c=0;
   printf("Enter a string to convert it into lower case\n");
   gets(s);
   while (s[c] != '\0')
    {
      if (s[c] >= 'A' && s[c] <= 'Z')
      {
         s[c] = s[c] + 32;
      }
      c++;
    }
   printf("The string in lower case: %s\n",s);
   return 0;
}
