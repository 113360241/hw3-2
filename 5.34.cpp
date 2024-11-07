
#include <iostream>
using namespace std;
int power(int a, int b) {
    int c;
    c = a;
    for (b; b > 1; b--) 
        a *= c;
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    a = power(a, b);
    cout << a << endl;
}

