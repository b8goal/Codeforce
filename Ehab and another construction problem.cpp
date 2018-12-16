#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <functional>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

const int INF = 987654321;
const int MOD = 998244353;

int main(void) {
	int n;
	scanf("%d", &n);
	int a, b;
	b = 2;
	a = n - 1;
	if (a*b > n && (double) a / (double) b < double(n)) {
		printf("%d %d\n", a, b);
	}
	else puts("-1");
}