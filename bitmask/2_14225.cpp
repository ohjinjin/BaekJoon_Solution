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
int flags[2000001] = { 0, };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	/* declare variables */
	int n;
	vector <int> arr;

	/* input */
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		
		arr.push_back(tmp);
	}

	/* process */
	for (int i = 1; i < (1 << n); i++) {
		vector <int> v;
		// i = 00001
		// 00010
		// 00011
		// ...
		// 11111
		for (int j = 0; (1 << j) <= i; j++) {
			// j = 00001
			// 00010
			// 00011
			// ...
			// 11111
			if (i & (1 << j)) {
				v.push_back(j);	// [4] or [3] or [2] or [1] or [0]
			}
		}

		int sum = 0;
		for (int j = 0; j < v.size(); j++) {
			sum += arr[v[j]];
		}
		//if (sum == S) {
		//	count++;
		//}
		flags[sum] = 1;
	}

	for (int i = 1; i < 20000001; i++) {
		if (flags[i] == 0) {
			cout << i << endl;
			break;
		}
	}

	// cin >> n;
	return 0;
}