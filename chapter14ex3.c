#include <stdio.h>

const char *start_filename = "numbers.txt";

const char *not3s_filename = "not 3s numbers.txt";
const char *out_3s_filename = "3s numbers.txt";

int main() {

	FILE *infile;           /* pointer the file with numbers */
	FILE *outfile;          /* pointer to file with not 3s numbers */
	FILE *out3file;         /* pointer to 3s file */

	char line[100];         /* store one line of a file */
	int number;             /* number from the file */

/* this opens the main file with all the numbers to read, if it does not find the file it will send a message */
	infile = fopen(start_filename, "r");
	if (infile == NULL) {
		fprintf(stderr, "Error: Problem opening %s for reading\n", start_filename);
		return(8);
	}


/* this one opens the file for read it and write */
	outfile = fopen(not3s_filename, "w+");
	if (outfile == NULL) {
		fprintf(stderr, "Error: Problem opening %s for writing\n", not3s_filename);
		fclose(infile);
		return(8);
	}

	out3file = fopen(out_3s_filename, "w+");
	if (out3file == NULL) {
		fprintf(stderr, "Error: Problem opening %s for writing\n", out_3s_filename);
		fclose(infile);
		fclose(outfile);
		return(8);
	}


/* this is where the main operation takes place, it separates the numbers in divisible by 3 or not and put them in different files */
	while (fgets(line, sizeof(line), infile)) {
		sscanf(line, "%d", &number);
		if ((number % 3) == 0) {
			/* it is divisible by 3 */
			fprintf(out3file, "%d\n", number);
		} else {
			/* not divisible by 3 */
			fprintf(outfile, "%d\n", number);
		}
	}

	fclose(infile);
	fclose(outfile);
	fclose(out3file);

	return(0);
}
