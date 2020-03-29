#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
	vector<int> answer;
	vector<vector<int>> tmp;

	for (int i = 1; i < s.size() - 1; i++) {
		if (s[i] == '{') {
			i++;
			vector <int> innerTmp;
			int j = i;
			for (; s[j] != '}' && s[j] != ','; j++) {
				string tmpStr = "";
				if (s[j] == ',') {
					continue;
				}

				int l = j;
				for (; s[l] != ',' && s[l] != '}'; l++, i++, j++) {
					tmpStr += s[l];
				}
				/*if (s[j] == ',') {
				continue;
				}
				else {
				innerTmp.push_back(s[j]-'0');
				}*/
				innerTmp.push_back(atoi(tmpStr.c_str()));
			}
			tmp.push_back(innerTmp);
		}
		else {   // ','
			continue;
		}
	}
	/*
	int minIdx = 0;
	for (int i = 1; i < tmp.size(); i++) {
	if (tmp[i].size() >tmp[minIndx].size())
	}*/
	for (int k = 1; k <= tmp.size(); k++) {
		int i;
		for (i = 0; i<tmp.size(); i++) {
			if (tmp[i].size() == k) {
				break;
			}
		}
		for (int j = 0; j < tmp[i].size(); j++) {
			for (int l = 0; l < answer.size(); l++) {
				if (tmp[i][j] == answer[l]) {
					tmp[i][j] = 0;
				}
			}
			if (tmp[i][j] != 0) {
				answer.push_back(tmp[i][j]);
			}
		}
	}

	return answer;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	//string s = "{{2}},{2,1},{2,1,3},{2,1,3,4}}";
	//string s = "{{1,2,3}},{2,1},{1,2,4,3},{2}}";
	//string s = "{{20,111}},{111}}";
	//string s = "{{123}}";
	string s = "{{4,2,3}},{3},{2,3,4,1},{2,3}}";
	vector<int> answer = solution(s);

	cout << "[" << answer[0];
	for (int i = 1; i < answer.size(); i++) {
		cout << ',';
		cout << answer[i];
	}
	cout << "]";

	//int n;
	//cin >> n;

	return 0;
}