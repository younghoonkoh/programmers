#include <iostream>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j-1 < i; ++j) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}