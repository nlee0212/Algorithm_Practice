#include <stdio.h>

int main() {
	int sugar;

	scanf("%d", &sugar);
	if ((sugar % 5) % 3 != 0) {
		if (sugar % 5 == 1 && sugar / 5 > 1)
			printf("%d\n", (sugar / 5) - 1 + 2);
		else if (sugar % 5 == 4 && sugar / 5 > 1)
			printf("%d\n", (sugar / 5) - 1 + 3);
		else if (sugar % 5 == 2 && sugar / 5 > 2)
			printf("%d\n", (sugar / 5) - 2 + 4);
		else if (sugar % 3 == 0)
			printf("%d\n", sugar / 3);
		else
			printf("-1\n");
	}
	else
		printf("%d\n", (sugar / 5) + (sugar % 5) / 3);
}