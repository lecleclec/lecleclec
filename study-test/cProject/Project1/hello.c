#include <iostream>
using namespace std;
int main() {
	int a[7] = {1,221,33,4,5,3,2};
	int len = 7;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			int temp;
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << a[i] << endl;
	}
	return 0;
}