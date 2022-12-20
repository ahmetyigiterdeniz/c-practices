#include<stdio.h>

int main (){
  int a = 0;
  while (a < 10)
    {
      if (a % 2 == 0)
	{
	  printf ("* * * * * * * *\n");
	}
      else
	{
	  printf (" * * * * * * * \n");
	}
	a++;
    }
}
