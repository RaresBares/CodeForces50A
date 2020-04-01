#include <iostream>

using namespace std;

int main() {


    int n,m;
    cin >> n >> m;

    int mod = (n*m)%2;
    cout << (((n*m)-mod)/2);

    return 0;
}
