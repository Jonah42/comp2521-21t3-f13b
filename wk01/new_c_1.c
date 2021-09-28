#include <stdio.h>

void s1(char ch) {
	// S1
	switch (ch) {
	    case 'a': printf("eh? "); break;
	    case 'e': printf("eee "); break;
	    case 'i': printf("eye "); break;
	    case 'o': printf("ohh "); break;
	    case 'u': printf("you "); break;
	}
	printf("\n");
}

void s2(char ch) {
	// S2
	switch (ch) {
	    case 'a': printf("eh? ");
	    case 'e': printf("eee ");
	    case 'i': printf("eye ");
	    case 'o': printf("ohh ");
	    case 'u': printf("you ");
	}
	printf("\n");
}

int main(void) {
	s1('a');
	printf("\n\n");
	s2('a');
	return 0;
}