#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Info" << endl << endl << "Write between your numbers| " << endl << "+ - plus" << endl << "- - minus" << endl << "* - multiplication" << endl << " - division" << endl << "| - module" << endl << "^ - degree" << endl << "q - sqrt" << endl << "r - rounding" << endl << endl;

    while (true) {
        cout << "Write 2 numbers| ";
        double a,b;
        char c;
        cin >> a >> c >> b;

        if (c == '+') {
            cout << "Answer|" << a + b << endl << endl;
        }
        if (c == '-') {
            cout << "Answer|" << a - b  << endl  << endl;
        }
        if (c == '*') {
            cout << "Answer| " << a * b << endl  << endl;
        }
        if (c == '/') {
            cout << "Answer| " << a / b  << endl  << endl;
        }
        if (c == '|') {
            cout << "Answer| " << endl;
            if (a < 0) {
                cout << "|" << a << "| = " << -a << endl;

                if (b >= 0) {
                    cout << "|" << b << "| = " << b << endl << endl;
                }

                if (b < 0) {
                    cout << "|" << b << "| = " << -b << endl << endl;
                }

            }
            if (a >= 0) {
                cout << "|" << a << "| = " << a << endl;

                if (b >= 0) {
                    cout << "|" << b << "| = " << b << endl << endl;
                }

                if (b < 0) {
                    cout << "|" << b << "| = " << -b << endl << endl;
                }

            }
        }
        if (c == '^') {

            cout << "Answer| " << a << "^" << b << " = " << pow(a, b) << endl << endl;


        }

        if (c == 'q') {

            if (a < 0 or b < 0) {
                cout << "Answer| " << "Our programm can write only R numbers" << endl << endl;
            }

            if (a >= 0 and b >=0) {
                cout << "Answer| " << endl << "sqrt(" << a << ") = " << sqrt(a) << endl << "sqrt(" << b << ") = " << sqrt(b) << endl << endl;
            }

        }

        if (c == 'r') {
            cout << "Answer| " << endl << floor(a) << " - (Your first writed number)" << endl << floor(b) << " - (Your second writed number)" << endl << endl;
        }
    }
}
