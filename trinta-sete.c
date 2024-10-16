#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	int *p;
	int *q;
	int *r;

	a = 3;
	p = &a; /* p = a = 3 */
	q = p; /* q = p = a = 3 */
	c = 4;
	r = &b; /* r = b = ??? */

	/* PT1: (p = a = 3) + (p = a = 3) */
	/* PT2: (r = b) = 3 + 3 */
	/* PT3: b = 6 */
	(*r) = (*p) + (*q);

	(*p) = 4; /* p = a = 4 ... a = 4 */
	(*q) = 6; /* q = p = a = 6 ... a = 6 */

	/* A = 6, B = 6, C = 4 */
	printf("%d, %d, %d\n", a, b, c);

	return 0;
}
