#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    // A の入力
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    // クエリの入力
    for (int i = 0; i < Q; ++i)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            // 1 番目の形式なら、A を更新
            int k, x;
            cin >> k >> x;
            A[k - 1] = x;
        }
        else
        {
            // 2 番目の形式なら、A を出力
            int k;
            cin >> k;
            cout << A[k - 1] << endl;
        }
    }

    return 0;
}
