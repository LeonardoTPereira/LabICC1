#include <stdio.h>

int main ()
{
  char str[80], str2[80];
  int i, h;
  float f;

  printf ("Uma string: ");
  scanf ("%79s",str);
  printf ("Outra string: ");
  scanf ("%s",str2);
  printf ("Um int: ");
  scanf ("%d",&i);
  printf("Um float: ");
  scanf("%f", &f);
  printf ("Um hexadecimal: ");
  scanf ("%x",&h);
  printf ("String: %s\nString2: %s\nInteiro: %d\nFloat: %f\nHexa %#x (%d).\n",str, str2, i, f, h, h);
  printf("Float com algumas casas decimais: %.2f", f);
  return 0;
}
