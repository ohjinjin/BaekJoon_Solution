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
	int n;
	vector <int> arr;
	arr.push_back(1);	// when n=1
	arr.push_back(3);	// when n=2

	/* input */
	cin >> n;

	/* process */
	if (n > 2) {
		for (int i = 2; i < n; i++) {
			arr.push_back((arr[i - 1] + arr[i - 2] * 2) % 10007);
		}
	}

	/* output */
	cout << arr[n - 1]  << endl;

	// cin >> n;
	return 0;
}