#include <stdio.h>

void win_func() {
	printf("You win! Here's your shell.\n");
	system("/bin/sh");
}

int main(int argc, char** argv[]) {
	int win = 0;
	char buf[20];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s INPUT\n", argv[0]);
		exit(2);
	}

	strcpy(buf, argv[1]);
	
	printf("You entered '%s'\n", buf);

	return 0;
}
