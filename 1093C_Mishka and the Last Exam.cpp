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

long long a[200001], b[200001];

int main(void) {
	int n, f, e;
	cin >> n;
	for (int i = 1; i <= n / 2; i++) {
		cin >> b[i];
		if (i == 1) {
			a[i] = 0;
			a[n] = b[i];
		}
		else {
			if (a[n - i + 2] < b[i]) {
				a[n + 1 - i] = a[n - i + 2];
				a[i] = b[i] - a[n +1 - i];
				if (a[i] < a[i - 1]) {
					a[i] = a[i - 1];
					a[n + 1 - i] = b[i] - a[i];
				}
			}
			else {
				a[i] = a[i - 1];
				a[n + 1 - i] = b[i] - a[i];
				if (a[n + 1 - i] > a[n + 2 - i]) {
					a[n + 1 - i] = a[n + 2 - i];
					a[i] = b[i] - a[n + 1 - i];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}