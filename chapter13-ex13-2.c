#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char *notspace(char *string); /* finds first nonwhite character in a string */

/* this is the function */
char *notspace(char *string)
{
	/* search all the characters */
	while (*string != '\0') {
		/* Check if character is not space */
		if (! isspace(*string))
			/* Return pointer to this first notspace character
      The isspace() function checks whether a character is a white-space character or not */
			return string;
		++string;
	}
/*this is my return value*/
	return string;
}

int main()
{
	char string[] = "  Hello world";

	printf("First not-space is: '%c'\n", *notspace(string));

	return 0;
}
