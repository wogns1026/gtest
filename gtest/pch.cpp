//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"

using namespace std;

int addFunc(int a, int b) {
	return a + b;
}
int subFunc(int a, int b) {
	return a - b;
}
int mulFunc(int a, int b) {
	return a * b;
}
int divFunc(int a, int b) {
	if (b == 0)
		return -1;
	return a / b;
}
int factorialFunc(int n) {
	int ans = 1;
	if (n <= 1)
		ans = 1;
	else {
		for (int i = n; i >= 1; i--) {
			ans *= i;
		}
	}
	return ans;
}
int combinationFunc(int n, int r) {
	return factorialFunc(n) / (factorialFunc(n - r) * factorialFunc(r));
}