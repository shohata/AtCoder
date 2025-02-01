#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    int a, b;
    cin >> s;
    cin >> a >> b;
    a--;
    b--;
    char c = s[a];
    s[a] = s[b];
    s[b] = c;
    cout << s << endl;
    return 0;
}
