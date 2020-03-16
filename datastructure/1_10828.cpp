#include<iostream>
#include<stack>
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

	/* ���� ���� */
	stack<int> s;
	int n;
	string str;

	/* �Է� */
	cin >> n;

	/* ó�� & ��� */
	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			int tmpNum;
			cin >> tmpNum;
			s.push(tmpNum);
		}
		else if (str == "pop") {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
				continue;
			}
			cout << "-1" << endl;
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			if (!s.empty()) {
				cout << "0" << endl;
				continue;
			}
			cout << "1" << endl;
		}
		else if (str == "top") {
			if (!s.empty()) {
				cout << s.top() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
	}

	//cin >> n;
	return 0;
}