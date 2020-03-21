#include<iostream>
#include<vector>
/*#include<string>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<cstring>
#include<functional>
#include<cmath>
#include<stack>*/

// #define SIZE 1010

using namespace std;

// typedef long long int ll;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	/* declare variables */
	int T;
	int arr[11] = { 0, };

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;

	/* input & process & output */
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		// 아직 안구해졌을 수 있으니까 ..
		if (n > 2) {
			for (int j = 3; j < n; j++) {
				if (arr[j] != 0) {
					continue;
				}
				arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
			}
		}

		cout << arr[n - 1] << endl;
	}

	// cin >> T;
	return 0;
}