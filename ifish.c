#include <stdio.h>


int main(int argc, char *argv, char *envp[])
{
  int i = 0;
  char str[120];
  char *p;
  const char *array[10];
  printf("@ifish ");
  while (stdin != 0)
  {
    fgets(str, 120, stdin);
    p = strtok(str,' ');
    while (p != NULL)
    {
      array [i++] = p;
      p = strtok (NULL, ' ');
    }
		if (stdin == '\n')
			printf("@ifish ");
      i = 0;
	}
}
