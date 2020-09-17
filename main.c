#include <stdio.h>
#include <stdlib.h>

extern double euclidean(double x1, double y1, double x2, double y2);

int main(void) {
	printf("%f\n", euclidean(3.0, 4.0, 2.0, 1.0));
	return EXIT_SUCCESS;
}
