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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i*j > n && double(i) / double(j) < double(n) && !(i%j)) {
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}
	puts("-1");
	return 0;
}