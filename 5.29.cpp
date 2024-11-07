
#include <iostream>
using namespace std;

int g(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int lcm = (a * b) / g(a, b);

    cout << lcm << endl;
}

