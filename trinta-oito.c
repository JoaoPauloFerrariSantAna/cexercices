#include <stdio.h>
#include <stdlib.h>

int main() {
	float a;
	float b;
	float *p;
	float * q;

	p = malloc(sizeof(float)); /* p = 4 */
	q = p; /* q = p = 4 */
	(*q) = 0.4f; /* q = 0.4 ... p = 0.4  */
	a = (*p); /* a = p = 0.4 porque q = p = 0.4 */
	b = 7.1f;

	/* PT1: a = p = 0.4 porque q = 0.4 e q = p */
	/* PT2: b = 7.1 */
	/* ... p = 7.5 */
	(*p) = a + b;

	q = &b; /* q = b = 7.1 */

	/* PT1: p = a + b = 7.5 */
	/* PT2: q = b = 7.1 */
	/* ... a = 14.9 */
	a = (*p) + (*q);

	printf("%f, %f, %f, %f\n", (*p), a, b, (*q));

	free(p);

	return 0;
}
