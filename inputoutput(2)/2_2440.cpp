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

	/* 변수 선언 ,*/
	int n;

	/* 입력 */
	cin >> n;

	/* 처리 & 출력 */
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			cout << "*";
		}
		/*for (int j = i + 1; j <= n; j++) {
		cout << "b";
		}*/
		cout << "\n";
	}

	return 0;
}
