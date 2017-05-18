// C_Keylogger
// Author: Codeleton011
// Date: 2017. 05. 18.

#include <stdio.h>
#include <conio.h>
#include <string.h>

// Main
int main()
{
	while (1)
	{
		if (_kbhit())
		{
			char* c = _getch(); // Store the Key in the char
			printf("%s", &c); // Print the key to the screen
		}
	}
	return 0;
}