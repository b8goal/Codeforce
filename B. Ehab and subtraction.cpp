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
	int n, k, cur, prev, s;
	scanf("%d %d", &n, &k);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	sort(v.begin(), v.end(), less<int>());
	prev = s = 0;
	cur = v[0];
	while (k--) {
		int cnt = 0;
		if (!v.empty()) {
			s = v[0];
			printf("%d\n", s - prev);
		}
		else puts("0");
		for (int i = 0; i < v.size(); i++) {
			prev = v[0];
			if (v[i] - s == 0) {
				cnt++;
			}
			else break;
		}
		while (cnt--)
			v.erase(v.begin());
	}
	return 0;
}