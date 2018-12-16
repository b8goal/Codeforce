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

int dp[100001];

int main(void) {
	int n, k, x, prev = 0, mx = 0;
	scanf("%d %d", &n, &k);
	fill(dp+1, dp + n, 1);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		if (x != prev)
			dp[i] = dp[i - 1] + 1;
		mx = max(mx, dp[i]);
		prev = x;
	}
	printf("%d\n", mx);
	return 0;
}