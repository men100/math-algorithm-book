// 問題 3.2.3 (問題 ID : 017)
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

// Least Common Multiple
long long LCM(long long A, long long B) {
    long long gcd = GCD(A, B);
    return (A / gcd) * (B / gcd) * gcd;
}

int main() {
    long long N;
    long long A, B;
    cin >> N;
    cin >> A;

    for (long long i = 1; i < N; i++) {
        cin >> B;
        A = LCM(A, B); // A と B の LCM を求め、A に代入
    }

    cout << A << endl;

    return 0;
}
