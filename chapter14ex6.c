#include <stdio.h>
#include <string.h>

char *in_file = "information.txt";

int main() {

	FILE *infile;           /* pointer file */
	char line[100];         /* line from the file */

	int position;           /* the position to read, this will move along the data it will read */

	infile = fopen(in_file, "r");
	if (infile == NULL) {
		fprintf(stderr, "There is no file %s\n", in_file);
		return(8);
	} /* if the file is not found it will send the message */

	position = 0;
	while (fgets(line, sizeof(line), infile)) {
		if (line[0] == '\n') {
			/* blank line  record separator */
			printf("\n");
			position = 0;
			continue;
		}

		line[strlen(line) - 1] = '\0';          /* get rid of newline */

		switch (position) {
			case 1:
			case 2:
			case 5:
			case 6:
				printf("%s\n", line);       /* information of the person */
				break;
			case 0:
			case 4:
				printf("%s ", line);        /* first name */
				break;
			case 3:
				printf("%s, ", line);       /* city */
				break;
			default:
				printf("Error: unknown field\n");
		}

		++position;

	}

	fclose(infile);

	return(0);
}
