#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B;

	while ((cin >> A >> B) && (A != 0 && B != 0)) {
		cout << A + B << endl;
	}

	return 0;
}