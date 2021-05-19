#include <stdio.h>
#include <cs50.h>
int main (void)
{
  float a,b,c;
  a=get_float("side 1 ");
  b=get_float("side 2 ");
  c=get_float("side 3 ");
  if (a>b,a>c)
  {
    if((a*a)==((b*b)+(c*c)))
      printf ("Yes");
    else
      printf ("No");  
  }
  else if (b>a,b>c)
  {
    if((b*b)==((a*a)+(c*c)))
      printf ("Yes");
    else
      printf ("No");  
  }
  else if (c>a,c>b)
  {
    if((c*c)==((a*a)+(b*b)))
      printf ("Yes");
    else
      printf ("No");
  }
}
           
    
  
  
