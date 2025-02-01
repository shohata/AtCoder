#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    bool a = false, b = false, c = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a = true;
        else if (s[i] == 'B')
            b = true;
        else if (s[i] == 'C')
            c = true;
        if (a && b && c)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
