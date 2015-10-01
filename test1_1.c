#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
		Oppretter først en kompleks datatype, 'node', denne skal holde på
		nåværende linje og en peker til neste node.
*/

struct node
{
	char line[128];
	struct node* next;
};

int main(int argc, char* argv[])
{
	struct node* head = NULL;
	struct node* tail = NULL;
	struct node* current = malloc(sizeof(struct node));
	char myLine[256];

	FILE* file = fopen(argv[1],"r");

	while (fgets(myLine, sizeof(myLine), file))
	{
		strcpy(current->line, myLine);

		if (head == NULL)
		{
			printf("%s\n", head->line);
			head = current;
			printf("%s\n", head->line);
		}
		if (tail == NULL)
		{
			tail = current;
		}
	}
	fclose(file);

	printf("%s", head->line);

	return 0;
}
