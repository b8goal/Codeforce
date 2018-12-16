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
int ans, dp[101], chk[101];


int main(void) {
	int t;
	scanf("%d", &t);
	fill(dp, dp + 101, INF);
	for (int i = 2; i <= 7; i++) dp[i] = 1;
	for (int i = 8; i <= 100; i++)
	{
		dp[i] = i / 7 + 1;
	}
	
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}