// 問題 2.2.4 (問題 ID : 005)
#include <iostream>
#include <string>
using namespace std;

int N;
int a;
int sum = 0;
int ans;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
        cin >> a;
        sum += a;
    }
    ans = sum % 100;
	cout << ans << endl;
	
	return 0;
}
