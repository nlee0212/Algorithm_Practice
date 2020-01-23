#include <stdio.h>
#define li long int

int main() {
	li m;
	int i,a, b, c, num[10] = { 0 };
	char mult[10];
	scanf("%d %d %d", &a, &b, &c);
	m = (li)(a*b*c);
	sprintf(mult, "%d", m);
	for (i = 0; i < strlen(mult); i++) num[mult[i]-48]++;
	for (i = 0; i < 10; i++) printf("%d\n",num[i]);
}