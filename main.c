#include <stdio.h>
#include <stdlib.h>

extern double VFE02c(double x1, double y1, double x2, double y2);

int main(void) {
	printf("%f\n", VFE02c(3.0, 4.0, 2.0, 1.0));
	return EXIT_SUCCESS;
}
