#include<iostream>
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

class Node {
	string data;
	Node *left;
	Node *right;

public:
	Node() {
		data = "";
		left = right = NULL;
	}
	string getData() {
		return data;
	}
	void setData(string data) {
		this->data = data;
	}
	void setLeft(Node *left) {
		this->left = left;
	}
	void setRight(Node *right) {
		this->right = right;
	}
	void static preorder(Node *root) {
		if (root != NULL) {
			cout << root->data;
			preorder(root->left);
			preorder(root->right);
		}
	}
	void static inorder(Node *root) {
		if (root != NULL) {
			inorder(root->left);
			cout << root->data;
			inorder(root->right);
		}
	}
	void static postorder(Node *root) {
		if (root != NULL) {
			postorder(root->left);
			postorder(root->right);
			cout << root->data;
		}
	}
};

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	/* 변수 선언 */
	int n;
	string str;

	/* 입력 */
	cin >> n;

	Node *T = new Node[n];
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		int j;
		for (j = 0; j < n; j++) {
			if ((T[j].getData() == str)||(T[j].getData() == "")) {
				break;
			}
		}
		if (T[j].getData() == "") {
			T[j].setData(str);
		}

		cin >> str;
		if (str != ".") {
			int k;
			for (k = 0; k < n; k++) {
				if ((T[k].getData() == str) || (T[k].getData() == "")) {
					break;
				}
			}
			if (T[k].getData() == "") {
				T[k].setData(str);
			}
			T[j].setLeft(&T[k]);
		}
		
		cin >> str;
		if (str != ".") {
			int k;
			for (k = 0; k < n; k++) {
				if ((T[k].getData() == str) || (T[k].getData() == "")) {
					break;
				}
			}
			if (T[k].getData() == "") {
				T[k].setData(str);
			}
			T[j].setRight(&T[k]);
		}
	}
	/* 처리 & 출력 */
	Node::preorder(T);
	cout << endl;
	Node::inorder(T);
	cout << endl;
	Node::postorder(T);
	cout << endl;
	
	//cin >> n;
	return 0;
}