#include "prototypes.h"

/*
TO DO:
- browse a string given as second argument of the exe
- if the characters are only alphanumericals, proceed further
- else, print an error and ask to rewrite the argument
*/

int	alphanstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (my_alphanum(str[i]) == 1)
	i++;
      else
	return (0);
    }
  return (1);
}
