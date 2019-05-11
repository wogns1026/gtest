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
	if (n <= 1)
		return 1;
	return factorialFunc(n - 1) * n;
}
int combinationFunc(int n, int r) {
	if (n == r || r == 0)
		return 1;
	return combinationFunc(n - 1, r - 1) + combinationFunc(n - 1, r);
}