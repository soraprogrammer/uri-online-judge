#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double A, p = 3.14159, R;
    cin >> R;
    cout << fixed;
    cout << "A=" << setprecision(4) << p * (R*R) << endl;
 
    return 0;
}