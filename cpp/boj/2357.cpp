#include <iostream>
#include<vector>

using namespace std;

struct seg {
    int n;
    using _T = long long;
    vector<_T> S;

    _T (*op)(_T, _T);

    _T e;

    seg(const vector<_T> &A, _T(*op)(_T, _T), _T e) : op(op), e(e) {
        n = A.size();
        S.resize(4 * n);
        init(A, 0, n - 1, 1);
    }

    _T init(const vector<_T> &A, int left, int right, int node) {
        if (left == right) {
            return S[node] = A[left];
        }
        int mid = (left + right) / 2;
        return S[node] = op(init(A, left, mid, node * 2),
                            init(A, mid + 1, right, node * 2 + 1));
    }

    _T query(int left, int right, int node, int nodeleft, int noderight) {
        if (right < nodeleft || noderight < left) return e;
        if (left <= nodeleft && noderight <= right) return S[node];

        int mid = (nodeleft + noderight) / 2;
        return op(query(left, right, node * 2, nodeleft, mid),
                  query(left, right, node * 2 + 1, mid + 1, noderight));
    }

    _T query(int left, int right) {
        return query(left, right, 1, 0, n - 1);
    }

    void update(int index, _T newvalue, int node, int nodeleft, int noderight) {
        if (index < nodeleft || noderight < index) return;
        if (nodeleft == noderight) {
            S[node] = newvalue;
            return;
        }
        int mid = (nodeleft + noderight) / 2;
        update(index, newvalue, node * 2, nodeleft, mid);
        update(index, newvalue, node * 2 + 1, mid + 1, noderight);
        S[node] = op(S[node * 2], S[node * 2 + 1]);
    }

    void update(int index, _T newvalue) {
        update(index, newvalue, 1, 0, n - 1);
    }
};

long long min(long long a, long long b) {
    if (a >= b) return b;
    else return a;
};

long long max(long long a, long long b) {
    if (a >= b) return a;
    else return b;
};


using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    seg min_tree(v, min, 1e9);
    seg max_tree(v, max, 0);
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << min_tree.query(a, b) << ' ' << max_tree.query(a, b) << '\n';
    }
}
