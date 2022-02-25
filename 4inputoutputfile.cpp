#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("4input.txt", "r", stdin);
    freopen("4output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";

    return 0;
}