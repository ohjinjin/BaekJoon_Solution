#include <iostream>
#define MAXNUM 100
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char arr[MAXNUM];

	for (int i = 0; i < MAXNUM; i++) {
		cin.getline(arr,MAXNUM+1);
		cout << arr << endl;
	}
	return 0;
}