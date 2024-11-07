#include <iostream>
using namespace std;

char ch(char k) {
    if (k >= 'A' && k <= 'Z') 
        k += 32;             
    else if (k >= 'a' && k <= 'z') 
        k -= 32;              
    return k;
}

int main() {
    char a;
    cin >> a;
    a = ch(a);
    cout << a;
}


