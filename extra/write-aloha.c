#include <stdio.h>

/* write aloha: write "Aloha!" to an "aloha.txt" file */
int main()
{
	FILE* fp = fopen("aloha.txt", "w");
	fputs("Aloha!", fp);
	fclose(fp);
	return 0;
}
