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

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	set<int> s;
	s.insert(0);
	while (n--) {
		int a;
		scanf("%d", &a);
		s.insert(a);
	}
	auto it = s.begin();
	while (m--) {
		if (next(it) == s.end())
			puts("0");
		else {
			printf("%d\n", *next(it) - *it);
			it = next(it);
		}
	}
}