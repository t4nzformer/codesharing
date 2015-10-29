#include <stdio.h>


int main(int argc, char *argv, char *envp[])
{
  int i;
  char c[120];
  char *p;
  const char *array[10];
  printf("@ifish ");
  while (c != EOF)
  {
    c = getchar();
    p = strtok (c," ");
    while (p != NULL)
    {
      array [i++] = p;
      p = strtok (NULL, " ");
    }
		if (c == '\n')
			printf("@ifish ");
	}
}
