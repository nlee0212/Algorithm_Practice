#include <stdio.h>

int main() {
	char string[101];

	while (fgets(string, 101, stdin))
		printf("%s", string);
	return 0;
}