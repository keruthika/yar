# include#include <stdio.h>
 
int main()
{
  int a;
 
  printf("enter a character\n");
  scanf("%d", &a);
 
  if ((a >= 'a' && a <= 'z') || (a >= 'A' &&a <= 'Z')) {
   
      printf("%d is a vowel.\n", a);
    else
      printf("%d is a consonant.\n", a);
  }
  else
    printf("%d is neither a vowel nor a consonant.\n", a);
 
  return 0;
