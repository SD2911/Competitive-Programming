#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int fib1 = 0, fib2 = 1;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << fib1;
        } else if (i == 2) {
            cout << " " << fib2;
        } else {
            int fib_next = fib1 + fib2;
            cout << " " << fib_next;
            fib1 = fib2;
            fib2 = fib_next;
        }
    }

    cout << endl;

    return 0;
}

