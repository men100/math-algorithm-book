// 問題 2.5.4 (問題 ID : 011)
#include <iostream>
#include <string>
using namespace std;

int N;
int ans = 1;

int main() {
	cin >> N;

    cout << 2;
    for (int i = 3; i <= N; i++) {
        bool isNotDividable = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isNotDividable = false;
                break;
            }
        }
        if (isNotDividable) {
            cout << " " << i;
        }
    }
    cout << endl;
	
	return 0;
}
