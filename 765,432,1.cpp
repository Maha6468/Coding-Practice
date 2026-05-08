//1234567 → 765,432,1
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int count = 0;
    while(n > 0) {
        int digit = n % 10;   // last digit
        cout << digit;
        count++;
        if(count % 3 == 0 && n >= 10) {
            cout << ",";
        }
        n /= 10; // remove last digit
    }
   return 0;
}
