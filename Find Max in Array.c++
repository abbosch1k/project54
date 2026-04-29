#include <iostream>
using namespace std;

int main() {
    int a[4]={3,7,2,9};
    int max=a[0];

    for(int i=1;i<4;i++)
        if(a[i]>max) max=a[i];

    cout<<max;
}
