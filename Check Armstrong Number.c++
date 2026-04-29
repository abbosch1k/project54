#include <iostream>
using namespace std;

int main() {
    int n, sum=0, temp;
    cin >> n;
    temp = n;

    while(n>0) {
        int d = n%10;
        sum += d*d*d;
        n/=10;
    }

    cout << (sum==temp ? "Yes" : "No");
}
