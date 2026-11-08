#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, result = 0;
    int op;
    cout << "First number, operation (1:+ 2:- 3:* 4:/), second number:\n";
    if (!(cin >> a >> op >> b)) { cerr << "Error: invalid input\n"; return 1; }
    switch (op) {
        case 1: // addition
            result = a + b;
            break;
        case 2: // subtraction
            result = a - b;
            break;
        case 3: // multiplication
            result = a * b;
            break;
        case 4: // division
            if (b == 0) { cerr << "Error: division by zero\n"; return 2; }
            result = a / b;
            break;
        default: cerr << "Error: unknown operation\n"; return 1;
    }
    cout << "Result = " << result << "\n";
    return 0;
}
