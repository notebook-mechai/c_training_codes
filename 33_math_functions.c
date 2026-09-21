#include <stdio.h>
#include <math.h>

int main(){
	printf("sqrt: %.2f\n", sqrt(19));
	
	printf("round number (ceil): %.2f\n", ceil(1.4));
	printf("round number (floor): %.2f\n", floor(1.4));
	
	
	printf("pow: %.2f\n", pow(4, 3));


	printf("acos(0.64): %f\n", acos(0.64));
	printf("acos(-0.4): %f\n", acos(-0.4));
	printf("acos(0): %f\n", acos(0));
	
	
	printf("acosh(7): %f\n", acosh(7));
	printf("acosh(56): %f\n", acosh(56));
	printf("acosh(2.45): %f\n", acosh(2.45));
	
	
	printf("asin(0.64): %f\n", asin(0.64));
	printf("asin(-0.4): %f\n", asin(-0.4));
	printf("asin(0.0): %f\n", asin(0.0));
	printf("asin(1.0): %f\n", asin(1.0));
	printf("asin(-1.0): %f\n", asin(-1.0));
	printf("asin(2.0): %f\n", asin(2.0));
	
	
	printf("asinh(7): %f\n", asinh(7));
	printf("asinh(56): %f\n", asinh(56));
	printf("asinh(2.45): %f\n", asinh(2.45));
	
	
	printf("atan(0.5): %f\n", atan(0.5));
	printf("atan(-0.5): %f\n", atan(-0.5));
	printf("atan(5): %f\n", atan(5));
	printf("atan(-5.0): %f\n", atan(-5.0));
	printf("atan(100.0): %f\n", atan(100.0));
	printf("atan(-100.0): %f\n", atan(-100.0));
	
	
	printf("atan2(0.5, 0.5): %f\n", atan2(0.5, 0.5));
	printf("atan2(-0.5, -0.5): %f\n", atan2(-0.5, -0.5));
	printf("atan2(5, 5): %f\n", atan2(5, 5));
	printf("atan2(10, 20): %f\n", atan2(10, 20));
	printf("atan2(5, -5): %f\n", atan2(5, -5));
	printf("atan2(-10, 10): %f\n", atan2(-10, 10));
	
	
	printf("atanh(0.78): %f\n", atanh(0.78));
	printf("atanh(0.5): %f\n", atanh(0.5));
	printf("atanh(1): %f\n", atanh(1));
	
	printf("cbrt(0): %f\n", cbrt(0));
	printf("cbrt(1): %f\n", cbrt(1));
	printf("cbrt(27): %f\n", cbrt(27));
	printf("cbrt(0.64): %f\n", cbrt(0.64));
	printf("cbrt(-27): %f\n", cbrt(-27));
	
	
	const double PI = 3.141592653589793;
	printf("cos(3): %f\n", cos(3));
	printf("cos(-3): %f\n", cos(-3));
	printf("cos(0): %f\n", cos(0));
	printf("cos(PI): %f\n", cos(PI));
	printf("cos(PI / 2.0): %f\n", cos(PI / 2.0));
	
	
	printf("cosh(7): %f\n", cosh(7));
	printf("cosh(56): %f\n", cosh(56));
	printf("cosh(2.45): %f\n", cosh(2.45));
	
	
	printf("exp(0): %f\n", exp(0));
	printf("exp(1): %f\n", exp(1));
	printf("exp(10): %f\n", exp(10));
	printf("exp(4.8): %f\n", exp(4.8));
	printf("exp(2.718): %f\n", exp(2.718));
	
	
	printf("fabs(-4.7): %f\n", fabs(-4.7));
	printf("fabs(4.7): %f\n", fabs(4.7));
	printf("fabs(3): %f\n", fabs(3));
	
	
	printf("floor(0.60): %f\n", floor(0.60));
	printf("floor(0.40): %f\n", floor(0.40));
	printf("floor(5): %f\n", floor(5));
	printf("floor(5.1): %f\n", floor(5.1));
	printf("floor(-5.1): %f\n", floor(-5.1));
	printf("floor(-5.9): %f\n", floor(-5.9));
	
	
	printf("fma(0.5, 0.75, 1.0): %f\n", fma(0.5, 0.75, 1.0));
	printf("fma(3, 3, 1): %f\n", fma(3, 3, 1));
	printf("fma(2, 1.5, 1): %f\n", fma(2, 1.5, 1));
	
	
	printf("fmax(2.0, 0.25): %f\n", fmax(2.0, 0.25));
	printf("fmax(31.2, 18.0): %f\n", fmax(31.2, 18.0));
	printf("fmax(14, 22): %f\n", fmax(14, 22));
	printf("fmax(96, 2048): %f\n", fmax(96, 2048));
	
	
	printf("fmin(2.0, 0.25): %f\n", fmin(2.0, 0.25));
	printf("fmin(31.2, 18.0): %f\n", fmin(31.2, 18.0));
	printf("fmin(14, 22): %f\n", fmin(14, 22));
	printf("fmin(96, 2048): %f\n", fmin(96, 2048));
	
	
	printf("fmod(11.0, 3.0): %f\n", fmod(11.0, 3.0));
	printf("fmod(16.0, 4.0): %f\n", fmod(16.0, 4.0));
	printf("fmod(31.0, 2.5): %f\n", fmod(31.0, 2.5));
	
	
	printf("hypot(3.0f, 4.0f): %f\n", hypot(3.0f, 4.0f));
	printf("hypot(1.0, 1.0): %f\n", hypot(1.0, 1.0));
	printf("hypot(1.0, 10.0): %f\n", hypot(1.0, 10.0));
		
	
	const double E = 2.718281828;
	printf("log(6.0): %f\n", log(6.0));
	printf("log(E): %f\n", log(E));
	printf("log(2.0): %f\n", log(2.0));
	printf("log(1.0): %f\n", log(1.0));
	printf("log(0.0): %f\n", log(0.0));
	printf("log(-1.0): %f\n", log(-1.0));
	
	
	printf("log10(120.0): %f\n", log10(120.0));
	printf("log10(10.0): %f\n", log10(10.0));
	printf("log10(3.1623): %f\n", log10(3.1623));
	printf("log10(1.0): %f\n", log10(1.0));
	printf("log10(0.0): %f\n", log10(0.0));
	printf("log10(-1.0): %f\n", log10(-1.0));
	
	
	printf("log2(64.0): %f\n", log2(64.0));
	printf("log2(10.0): %f\n", log2(10.0));
	printf("log2(3.1623): %f\n", log2(3.1623));
	printf("log2(1.0): %f\n", log2(1.0));
	printf("log2(0.0): %f\n", log2(0.0));
	printf("log2(-1.0): %f\n", log2(-1.0));
	
	
	printf("remainder(11.0, 3.0): %f\n", remainder(11.0, 3.0));
	printf("remainder(16.0, 4.0): %f\n", remainder(16.0, 4.0));
	printf("remainder(31.0, 2.5): %f\n", remainder(31.0, 2.5));
	
	
	printf("round(0.60): %f\n", round(0.60));
	printf("round(0.60): %f\n", round(0.40));
	printf("round(5): %f\n", round(5));
	printf("round(5.1): %f\n", round(5.1));
	printf("round(-5.1): %f\n", round(-5.1));
	printf("round(-5.9): %f\n", round(-5.9));
	
	
	printf("sin(3): %f\n", sin(3));
	printf("sin(-3): %f\n", sin(-3));
	printf(" sin(0): %f\n", sin(0));
	printf("sin(PI): %f\n", sin(PI));
	printf("sin(PI / 2.0): %f\n", sin(PI / 2.0));
	
	
	printf("sinh(7): %f\n", sinh(7));
	printf("sinh(56): %f\n", sinh(56));
	printf("sinh(2.45): %f\n", sinh(2.45));
	
	
	printf("sqrt(0): %f\n", sqrt(0));
	printf("sqrt(1): %f\n", sqrt(1));
	printf("sqrt(9): %f\n", sqrt(9));
	printf("sqrt(0.64): %f\n", sqrt(0.64));
	printf("sqrt(-25): %f\n", sqrt(-25));
	
	printf("tan(3): %f\n", tan(3));
	printf("tan(-3): %f\n", tan(-3));
	printf("tan(0): %f\n", tan(0));
	printf("tan(PI): %f\n", tan(PI));
	printf("tan(PI / 2.0): %f\n", tan(PI / 2.0));
	
	
	printf("tanh(3): %f\n", tanh(3));
	printf("tanh(-3): %f\n", tanh(-3));
	printf("tanh(0): %f\n", tanh(0));
	printf("tanh(1): %f\n", tanh(1));
	
	printf("trunc(0.60): %f\n", trunc(0.60));
	printf("trunc(0.40): %f\n", trunc(0.40));
	printf("trunc(5): %f\n", trunc(5));
	printf("trunc(5.1): %f\n", trunc(5.1));
	printf("trunc(-5.1): %f\n", trunc(-5.1));
	printf("trunc(-5.9): %f\n", trunc(-5.9));
	
	
	
	
	
	
	
	
	return 0;
}
