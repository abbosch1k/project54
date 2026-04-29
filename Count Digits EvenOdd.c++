#include <iostream>
using namespace std;

int main() {
    int n, even=0, odd=0;
    cin >> n;

    while(n>0) {
        if((n%10)%2==0) even++;
        else odd++;
        n/=10;
    }

    cout<<even<<" "<<odd;
}
