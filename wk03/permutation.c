#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char* A[3] = {"cat", "dog", "mouse"};
	int P[3] = {2,3,1};

	char * B[3];
	for (int i = 0; i < 3; i++) { //O(n)
		int position = P[i];
		B[position-1] = A[i];
	}

	for (int i = 0; i < 3; i++) { //O(n)
		printf("%s ", B[i]);
	}
	printf("\n");
	return 0;
}

// O(2n) -> O(n)