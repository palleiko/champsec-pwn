#include <stdio.h>
#include <stdlib.h>

void win_func() {
	printf("You win! Here's your shell.\n");
	system("/bin/sh");
}

void stuff(char* things) {
	char buf[20];

	strcpy(buf, things);

	printf("You entered '%s'\n", buf);
}

int main(int argc, char** argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s INPUT\n", argv[0]);
		exit(2);
	}

	stuff(argv[1]);

	return 0;
}
