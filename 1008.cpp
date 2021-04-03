#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n, qtd;
    float vs, salary;
    cin >> n;
    cin >> qtd;
    cin >> vs;
    salary = qtd * vs;
    cout << "NUMBER = " << n << endl;
    cout << fixed;
    cout << "SALARY = U$ " << setprecision(2) << salary << endl;
 
    return 0;
}