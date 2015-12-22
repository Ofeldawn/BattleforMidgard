
int	my_alphanum(char c)
{
  if ((c >= 0 && c <= 9) ||
      (c >= 'A' && <= 'Z') ||
      (c >= 'a' && <= 'z'))
    return (1);
  else
    return (0);
}
