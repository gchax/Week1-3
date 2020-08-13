#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n{};
	double a{}, sum{}, avg{};
	printf("Mean Calculator\nAmount Of Numbers : ");
	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		printf("Enter the number : ");
		scanf("%lf",&a);
		sum += a;
	}
	avg = sum / n;
	printf("Mean is %.2lf", avg);
	return 0;
}