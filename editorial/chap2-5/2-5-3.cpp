// 問題 2.5.3 (問題 ID : 010)
#include <iostream>
#include <string>
using namespace std;

int N;
unsigned long long ans = 1;

int main() {
	cin >> N;

    do {
        ans *= N;
    }
    while (--N);

	cout << ans << endl;
	
	return 0;
}
