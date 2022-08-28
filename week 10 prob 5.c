#include <stdio.h>
struct complex {
	float real,im;
} a,b,c;

struct complex read(void);
void display(struct complex);
struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);
struct complex mul(struct complex, struct complex);
struct complex div(struct complex, struct complex);

void main() {
	fflust(stdin);
	printf("\nFor first complex number\n");
	a= read();
	display(a);
	printf("\nFor second complex number\n");
	b= read();
	display(b);
	printf("\nAfter addition the ");
	c= add(a, b);
	display(c);
	printf("\nAfter multiplication the ");
	c= mul(a, b);
	display(c);
}


{
	struct complex t;
	printf("Enter the real part\n");
	scanf("%f", &t.real);
	printf("Enter the imaginary part\n");
	scanf("%f", &t.im);
	return t;
}
void display(struct complex a) {
	printf("Complex Number is\n");
	printf("%f + i %f", a.real, a.im);
	printf("\n");
}
struct complex add(struct complex p, struct complex q) {
	struct complex t;
	t.real = (p.real + q.real);
	t.im = (p.im + q.im);
	return t;
}

struct complex mul(struct complex p, struct complex q) {
	struct complex t;
	t.real = (p.real * q.real) - (p.im * q.im);
	t.im = (p.real * q.im) + (p.im * q.real);
	return t;
}


