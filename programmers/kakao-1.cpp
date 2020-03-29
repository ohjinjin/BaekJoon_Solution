#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	vector <int> arr;
	int count = 0;

	for (int i = 0; i < moves.size(); i++) {
		int tmp = moves[i] - 1;

		for (int j = 0; j < board.size(); j++) {
			if (board[j][tmp]) {
				arr.push_back(board[j][tmp]);
				board[j][tmp] = 0;
				if (arr.size() > 1) {
					if (arr[arr.size() - 1] == arr[arr.size() - 2]) {
						arr.pop_back();
						arr.pop_back();
						count += 2;
					}
				}
				break;
			}

		}
	}
	return count;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<vector<int>> board = { { 0, 0, 0, 0, 0 },{ 0, 0, 1, 0, 3 },{ 0, 2, 5, 0, 1 },{ 4, 2, 4, 4, 2 },{ 3, 5, 1, 3, 1 } };
	vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
	cout << solution(board, moves);

	//int n;
	//cin >> n;

	return 0;
}