#include <stdio.h>

int horners(int* coeff, int length, int x) {
	int sum = coeff[0];
	for (int i = 1; i < length; i++) {
		sum = sum*x+coeff[i];
	}
	return sum;
}

int main(void) {
	int array[5] = {1,2,3,4,5}; // x^4 + 2*x^3 + 3*x^2 + 4*x + 5 = 5 + 8 + 12 + 16 + 16 = 57
	printf("%d\n", horners(array, 5, 2));
	return 0;
}
