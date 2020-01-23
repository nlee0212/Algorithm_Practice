#include <stdio.h>
#define sli signed long int

int main(void) {
	sli n, max, min,i,num;
	scanf("%ld", &n);
	for (i = 0; i < n; i++) {
		scanf("%ld", &num);
		if (i == 0) max = min = num;
		else if (max < num)max = num;
		else if (min > num)min = num;
	}
	printf("%ld %ld", min, max);
	return 0;
}