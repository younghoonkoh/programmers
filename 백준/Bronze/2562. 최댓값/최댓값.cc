#include <iostream>

int main() {

	int max = 0; 
	int A = 0;
	int array[9] = {};

	for (int i = 0; i < 9; ++i) {
		scanf("%d", &array[i]);
		if (array[i] > max) {
			max = array[i];
			A = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", A);
	
	

	return 0;

}