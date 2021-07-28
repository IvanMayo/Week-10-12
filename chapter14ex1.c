#include <stdio.h>

const char *file = "gods.txt";

int main() {

	FILE *fh;               /* file */
	char line[100];         /* lines of the file */
	int count = 0;          /* the line counter */

	fh = fopen(file, "r");
	if (fh == NULL) {
		/* if there is no file it will not do anything  */
		return(0);
	}
/* this where the operation takes place */
	while (fgets(line, sizeof(line), fh)) {
		++count;
	}

	printf("%d lines\n", count);

	return(0);
}
