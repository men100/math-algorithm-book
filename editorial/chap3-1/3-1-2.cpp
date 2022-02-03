// 問題 3.1.2 (問題 ID : 014)
#include <iostream>
#include <string>
using namespace std;

// 割り切れる場合、その数を返し、割り切れない場合は -1 を返す
int getDividedNumber(long long start, long long N) {
    for (long long i = start; i * i <= N; i++) {
        if (N % i != 0) {
            continue;
        }
        return i;
    }
    return -1;
}

int main() {
    long long N;
    cin >> N;

    bool flag = false;
    int ret = getDividedNumber(2, N);
    while (ret != -1) {
        if (flag) {
            cout << " ";
        }
        flag = true;
        cout << ret;

        // その割り切れる数で N を更新し、再び関数呼び出し
        N /= ret;
        ret = getDividedNumber(ret, N);
    }

    // 最後に残った割り切れない N を出力して終了
    if (N >= 2) {
        if (flag) {
            cout << " ";
        }
        cout << N;
    }
    cout << endl;

    return 0;
}
