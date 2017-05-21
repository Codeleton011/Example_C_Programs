// C_File_IO
// Author: Codeleton011
// Date: 2017. 05. 21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Main
int main()
{
	FILE *fp;

	// ===WRITE===
	// Write to a file, if file is not exists the program is creates a new fiel
	fp = fopen("test.txt", "w+"); // fopen(path, mode) mode= write+

	// See test.txt after this program is executed :P
	fprintf(fp, "Hello C Input! \n"); // fprintf(FILE, string);
	
	// Close the FILE
	fclose(fp);

	// ===READ===

	FILE *fr;
	char buffer[255];

	fr = fopen("test.txt", "r"); // Open in read mode

	fgets(buffer, 255, fr); // fgets read file until new line
	printf("%s", buffer);


	getchar(); // Prevent cmd closing
	
	return 0;
}
