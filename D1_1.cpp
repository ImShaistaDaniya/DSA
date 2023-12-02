/*Given an integer x, return true if x is a palindrome, and false otherwise.*/
#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;

    while (t != 0) {
        cin >> a;
        b = a;
        d = 0;

        while (b != 0) {
            c = b % 10;
            d = d * 10 + c;
            b = b / 10;
        }

        if (a == d) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        t--;
    }

    return 0;
}
