#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TRIE {
public:
	// 숫자가 10개니까
	TRIE * node[10];
	// 문자열의 끝을 표시
	bool finish;

	TRIE() {
		for (int i = 0; i < 10; i++) {
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
			int tmp = s.at(idx) - '0';	// ascii
			if (node[tmp] == NULL) {
				node[tmp] = new TRIE();
			}
			node[tmp]->insert(s, idx + 1);
		}
	}

	bool find(const string &s, int idx) {
		if (s.size() <= idx) {
			return true;
		}

		if (finish == true) {
			return false;
		}
		int tmp = s.at(idx) - '0';
		return node[tmp]->find(s, idx + 1);
	}
};

TRIE t = TRIE();
bool solution(vector <string> phone_book) {

	for (int i = 0; i < phone_book.size(); i++) {
		t.insert(phone_book[i], 0);
	}

	for (int i = 0; i < phone_book.size(); i++) {
		if (t.find(phone_book[i], 0) == false) {
			return false;
		}
	}

	return true;
}

int main(void) {
	vector <string> phone_book = { "12","123","1235","567","88" };
	
	cout << solution(phone_book);

	int n;
	cin >> n;
	return 0;
}