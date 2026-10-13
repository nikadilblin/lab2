#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	float A, B, K, Ss;
	A = 5.0;
	B = 3.0;
	K = 250.0;
	float N, S, cost, shir, dlin;
	shir = 1.0;
	dlin = 12.0;
	Ss = shir * dlin;
	S = A * B;
	N = S / Ss;
	cost = N * K;
	printf("площадь стены равна %.2f\n", S);
	printf("площадь одного рулона %.2f\n", Ss);
	printf("колличество рулонов %.2f\n", N);
	printf("цена обоев %.2f\n", cost);
	return 0;
}