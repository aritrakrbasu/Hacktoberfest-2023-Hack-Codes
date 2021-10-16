#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define deb(x) cout << #x << " is " << x << "\n"
#define int long long
#define MOD 1000000007LL
#define PI acos(-1)

template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

template <typename T>
using max_heap = priority_queue<T>;

template <class T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename... T>
void read(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void write(T &&...args) {
    ((cout << args), ...);
}

template <typename T>
void readContainer(T &t) {
    for (auto &e : t) {
        read(e);
    }
}

template <typename T>
void writeContainer(T &t) {
    for (const auto &e : t) {
        write(e, " ");
    }
    write("\n");
}

string toBinary(int n) {
    string ans = "";
    while (n > 0) {
        ans += to_string(n % 2);
        n /= 2;
    }
    return ans;
}

int toInt(const string &s) {
    int p = 1, ans = 0;
    for (const auto &ch : s) {
        if (ch == '1') ans += p;
        p *= 2;
    }
    return ans;
}

vector<int> palindromes;

void preprocessing() {
    palindromes.push_back(0);
    palindromes.push_back(1);
    for (int num = 0; num <= (1 << 15); ++num) {
        string front = toBinary(num);
        string back = front;
        reverse(begin(back), end(back));
        string curr = front + back;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
        curr = back + front;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
        curr = front + "0" + back;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
        curr = front + "1" + back;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
        curr = back + "0" + front;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
        curr = back + "1" + front;
        if (curr.back() == '1') palindromes.push_back(toInt(curr));
    }
    sort(begin(palindromes), end(palindromes));
}

int upperBound(int n) {
    int lo = 0, hi = palindromes.size() - 1, ans = palindromes[hi];
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (palindromes[mid] >= n) {
            ans = palindromes[mid];
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int lowerBound(int n) {
    int lo = 0, hi = palindromes.size() - 1, ans = palindromes[lo];
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (palindromes[mid] <= n) {
            ans = palindromes[mid];
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

void solve(int tc) {
    int n;
    read(n);
    int ub = upperBound(n);
    int lb = lowerBound(n);
    write(min(ub - n, n - lb), "\n");
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    preprocessing();
    int T = 1;
    read(T);
    for (int t = 1; t <= T; ++t) {
        solve(t);
    }
}