/*
n = 100
p = 10
q = 12
*/


#include <iostream>
using namespace std;

int f(int n) {
    if (n % 10 > 0) return n % 10;
    else if (n == 0) return 0;
    else return f(n / 10);
}

int S(int p, int q) {
    int a = 0;
    for (int i = p; i <= q; i++) {
        a += f(i);
    }
    return a;
}

int main() {
    //1
    int n;
    cout << " n = ";
    cin >> n;

    int resultF = f(n);
    cout << " f = " << resultF << endl;

    //2
    int p, q;

    cout << " p = ";
    cin >> p;

    cout << " q = ";
    cin >> q;

    int resultS = S(p, q);
    cout << " S(p, q) = " << resultS << endl;

    return 0;
}



