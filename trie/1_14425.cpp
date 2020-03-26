#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TRIE {
public:
	// ���ĺ��� 26���ϱ�
	TRIE * node[26];
	// ���ڿ��� ���� ǥ��
	bool finish;

	TRIE() {
		for (int i = 0; i < 26; i++) {
			node[i] = NULL;
		}
		finish = false;
	}
	~TRIE() {
		for (int i = 0; i<10; i++) {
			if (node[i]) {
				delete(node[i]);
			}
		}
	}

	void insert(const string &s, int idx) {
		if (s.size() <= idx) {
			finish = true;
		}
		else {
			int tmp = s.at(idx) - 97;	// ascii
			if (node[tmp] == NULL) {
				node[tmp] = new TRIE();
			}
			node[tmp]->insert(s, idx + 1);
		}
	}

	bool find(const string &s, int idx) {
		if (s.size() <= idx) {
			if (finish == true) {
				return false;
			}
			else {
				return true;
			}
		}

		int tmp = s.at(idx) - 97;
		//if (node[])
		if (node[tmp] != NULL) {
			return node[tmp]->find(s, idx + 1);
			//return false;//���ٰ� �ٷ� ����������ȵŰ� ������ ������ �����ϰŵ�..
		}
		else {
			return true;
		}
	}
};

TRIE t = TRIE();
int solution(vector <string> phone_book, int n) {
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		t.insert(phone_book[i], 0);
	}

	for (int i = n; i < phone_book.size(); i++) {
		if (t.find(phone_book[i], 0) == false) {
			cnt++;
		}
	}

	return cnt;
}

int main(void) {
	vector <string> dictionary;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n+m; i++) {
		string tmpStr;
		cin >> tmpStr;
		dictionary.push_back(tmpStr);
	}
	
	cout << solution(dictionary, n);

//	int n;
//	cin >> n;
	return 0;
}