// 問題 3.2.2 (問題 ID : 016)
#include <iostream>
#include <string>
using namespace std;

// Greatest Common Divisor
long long GCD(long long A, long long B) {
    while (A >= 1 && B >= 1) {
        if (A < B) { // A < B の場合、大きい方 B を書き換える
            B = B % A;
        } else { // A >= B の場合、大きい方 A を書き換える
            A = A % B;
        }
    }
    return (A >= 1) ? A : B;
}

int main() {
    long long N;
    long long A, B;
    cin >> N;
    cin >> A;

    for (long long i = 1; i < N; i++) {
        cin >> B;
        A = GCD(A, B); // A と B の GCD を求め、A に代入
    }

    cout << A << endl;

    return 0;
}
