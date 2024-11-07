#include <iostream>
using namespace std;

void fi(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        c = a + b; 
        cout << c << " ";
        a = b; 
        b = c; 
    }
    cout << endl;
}

int main() {
    int n;  
    cout << "輸入 n: ";
    cin >> n;

    
    if (n == 1) {
        cout << "0" << endl;
    }
    else if (n == 2) {
        cout << "0 1" << endl;
    }
    else {
        fi(n);
    }

    return 0;
}

