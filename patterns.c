#include <stdio.h>
#include <cs50.h>
int main (void)
{
  int ch;
  ch=get_int("Enter type of pattern (1 or 2)");
  int row;
  int space;
  switch (ch)
  {
    case 1 : row=get_int("Number of rows");
             for (int i=row;i>=1;i--)
             {
               for (int j=1;j<=i;j++)
                 printf ("#");
               printf ("\n");
             }
             break;
             
    case 2 : space=1;
             row=get_int("Number of rows");
             for (int i=row;i>=1;i--)
             {
               for (int j=1;j<=i-1;j++)
               {
                 printf (" ");
               }
               for (int k=1;k<=space;k++)
               {
                 printf ("#");
               } 
               printf ("\n");
               space++;  
             }
             break;
             
    default : printf("Inavalid choice");
              break;
                     
  }           
}                 
