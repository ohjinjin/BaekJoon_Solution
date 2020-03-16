#include<iostream>
#include<queue>
#include<string>
/*#include<vector>
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

	/* 변수 선언 */
	queue<int> q;
	int n;
	string str;

	/* 입력 */
	cin >> n;

	/* 처리 & 출력 */
	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			int tmpNum;
			cin >> tmpNum;
			q.push(tmpNum);
		}
		else if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
				continue;
			}
			cout << "-1" << endl;
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			if (!q.empty()) {
				cout << "0" << endl;
				continue;
			}
			cout << "1" << endl;
		}
		else if (str == "front") {
			if (!q.empty()) {
				cout << q.front() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
		else if (str == "back") {
			if (!q.empty()) {
				cout << q.back() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
	}

	//cin >> n;
	return 0;
}