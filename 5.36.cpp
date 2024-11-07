#include <iostream>
using namespace std;

void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        cout << "將盤子從 " << source << " 移到 " << target << endl;
    }
    else {
        hanoi(n - 1, source, auxiliary, target);
        cout << "將盤子從 " << source << " 移到 " << target << endl;
        hanoi(n - 1, auxiliary, target, source);
    }
}

int main() {
    int n = 4; 
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}

