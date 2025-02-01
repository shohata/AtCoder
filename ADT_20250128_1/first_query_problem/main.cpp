#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int num, k, x;
        cin >> num;
        if (num == 1)
        {
            cin >> k >> x;
            v[k - 1] = x;
        }
        else if (num == 2)
        {
            cin >> k;
            cout << v[k - 1] << endl;
        }
    }
    return 0;
}
