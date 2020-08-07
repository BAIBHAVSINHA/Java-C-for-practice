#include<stdio.h>
#define MAX 65
void main()
{
 #if MAX>=78
 {
    printf("\nGrade A");
 }
#elif MAX>=50
 {
    printf("\nGrade B");
 }
#elif MAX>=25
{
    printf("\nGrade C");
}
#else
printf("\nGrade D");
#endif
}
