#include<iostream>
/*#include<vector>
#include<algorithm>
#include<queue>
#include<string>
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

	/* ���� ���� ,*/
	int n;

	/* �Է� */
	cin >> n;
	
	/* ó�� & ��� */
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * (i - 1) + 1; j++) {
			if ((i == 1) || (i == n)) {
				cout << "*";
			}
			else {
				if ((j == 1) || (j == 2 * (i - 1) + 1)) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
	// cin >> n;
	return 0;
}