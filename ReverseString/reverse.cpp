#include <iostream>
using namespace std;

int main()
{

    string s = "";
    getline(cin, s); //includes whitespace
    // cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;
    return 0;
}