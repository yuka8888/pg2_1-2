#include<stdio.h>

int Power(int num1);

float Power(float num2);

int main() {
	int number1 = 10;
	int ans1 = 0;

	ans1 = Power(number1);
	printf("引数int Power関数%d\n", ans1);

	float number2 = 2.4;
	float ans2 = 0.0;

	ans2 = Power(number2);
	printf("引数float Power関数%f", ans2);

	return 0;
}

int Power(int num1) {
	return num1 * num1;
}

float Power(float num2) {
	return num2 * num2;
}