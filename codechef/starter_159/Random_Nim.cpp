#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

template <long long MOD>
class MINT
{
private:
    long long value;

public:
    MINT() : value(0) {}

    MINT(long long v)
    {
        value = v % MOD;
        if (value < 0)
            value += MOD;
    }

    MINT pow(long long exponent) const
    {
        MINT result = 1, base = *this;
        while (exponent > 0)
        {
            if (exponent & 1)
                result *= base;
            base *= base;
            exponent >>= 1;
        }
        return result;
    }

    MINT inv() const { return pow(MOD - 2); }

    operator long long() const { return value; }

    MINT &operator+=(const MINT &other)
    {
        value += other.value;
        if (value >= MOD)
            value -= MOD;
        return *this;
    }

    MINT &operator-=(const MINT &other)
    {
        value -= other.value;
        if (value < 0)
            value += MOD;
        return *this;
    }

    MINT &operator*=(const MINT &other)
    {
        value = (value * other.value) % MOD;
        return *this;
    }

    MINT &operator/=(const MINT &other)
    {
        *this *= other.inv();
        return *this;
    }

    friend MINT operator+(MINT a, const long long &b)
    {
        return MINT((a.value + (b % MOD) + MOD) % MOD);
    }

    friend MINT operator-(MINT a, const long long &b)
    {
        return MINT((a.value - (b % MOD) + MOD) % MOD);
    }

    friend MINT operator*(MINT a, const long long &b)
    {
        return MINT((a.value * (b % MOD)) % MOD);
    }

    friend MINT operator/(MINT a, const long long &b)
    {
        return MINT((a.value * MINT(b).inv().value) % MOD);
    }

    friend MINT operator+(MINT a, const MINT &b)
    {
        return MINT((a.value + b.value) % MOD);
    }

    friend MINT operator-(MINT a, const MINT &b)
    {
        return MINT((a.value - b.value + MOD) % MOD);
    }

    friend MINT operator*(MINT a, const MINT &b)
    {
        return MINT((a.value * b.value) % MOD);
    }

    friend MINT operator/(MINT a, const MINT &b)
    {
        return MINT((a.value * b.inv().value) % MOD);
    }

    friend std::ostream &operator<<(std::ostream &os, const MINT &mi)
    {
        return os << mi.value;
    }

    friend std::istream &operator>>(std::istream &is, MINT &mi)
    {
        long long x;
        is >> x;
        mi = MINT(x);
        return is;
    }
};

const long long MOD = 1e9 + 7;
using mint = MINT<MOD>;

void solve()
{
    int n;
    mint d;
    cin >> n >> d;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mint ans = (d + mint(1)) / (mint(2) * d);
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}