#include<stdio.h>
#include <stdlib.h>
/*

  A=65 
  a=97  
  a-A=32
*/
int main()
{
    char c = 'A';
    int x = 32;
    c = c | 32;
    printf("%c\n", c);
}
