#include<math.h>
#include <locale.h>
#include <stdio.h>

#define _USE_MATH_DEFINES
int main(){

	setlocale(LC_ALL, "RUS");
	double x = 1.0, y = 3.0;

	printf("ответ: %.3f", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
}