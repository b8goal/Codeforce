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
#include <set>
using namespace std;

const int INF = 987654321;
const int MOD = 998244353;
const int MAXN = 1001;

int main(void) {
	int n, prev = 0;
	scanf("%d", &n);
	while (n != prev) {
		prev = n;
		for (int x = n-1; x >= 1; x--) {
			if (n%x != 0) {
				n -= x;
				break;
			}
		}
	}
	printf("%d\n", n);
	return 0;
}