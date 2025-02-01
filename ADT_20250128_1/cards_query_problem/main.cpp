#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n, q;
    cin >> n;
    cin >> q;
    vector<vector<int>> v(n);
    map<int, vector<int>> m;
    for (int k = 0; k < q; k++)
    {
        int num, i, j;
        cin >> num;
        if (num == 1)
        {
            cin >> i >> j;
            v[j - 1].push_back(i);
            if (find(m[i].begin(), m[i].end(), j) == m[i].end())
            {
                m[i].push_back(j);
            }
        }
        else if (num == 2)
        {
            cin >> i;
            sort(v[i - 1].begin(), v[i - 1].end());
            for (int l = 0; l < v[i - 1].size() - 1; l++)
            {
                cout << v[i - 1].at(l) << " ";
            }
            cout << v[i - 1].back() << endl;
        }
        else if (num == 3)
        {
            cin >> i;
            sort(m[i].begin(), m[i].end());
            for (int l = 0; l < m[i].size() - 1; l++)
            {
                cout << m[i].at(l) << " ";
            }
            cout << m[i].back() << endl;
        }
    }
    return 0;
}
