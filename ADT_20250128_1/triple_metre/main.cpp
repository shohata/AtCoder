#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    string t = "oxxoxxoxxoxxoxxoxx";
    string s;
    cin >> s;
    int len = s.length();
    if (s[0] == 'o')
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] != t[i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else if (s[0] == 'x')
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] != t[i + 1])
            {
                for (int j = 0; j < len; j++)
                {
                    if (s[j] != t[j + 2])
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    return 0;
}
