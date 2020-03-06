#include <iostream>
#include <stdio.h>
#define MAXNUM 100

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, sum = 0;
	char arr[MAXNUM];

	scanf("%d", &N);
	scanf("%s", arr);

	for (int i = 0; i < N; i++) {
		sum += arr[i] - 48;
	}

	cout << sum << endl;

	return 0;
}