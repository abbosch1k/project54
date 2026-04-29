#include <iostream>
using namespace std;

int main() {
    int a[3]={5,10,15};

    for(int i=1;i<3;i++)
        cout<<a[i]-a[i-1]<<" ";
}
