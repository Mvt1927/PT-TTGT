#include "iostream"
using namespace std;
#include <time.h>
#include <windows.h>
int Mn_dequy(int x, int n)
{
    cout << "n = " << n << " == 0 : " << ((n == 0) ? "true" : "false") << endl;
    if (n == 0)
    {
        cout << "\tMn_dequy(" << x << ", " << n << ") = ";
        cout << "1" << endl;
        return 1;
    }
    cout << "\tMn_dequy(" << x << ", " << n << ") = ";
    cout << x << " * Mn_dequy(" << x << ", " << n - 1 << ")" << endl;
    int pre = Mn_dequy(x, n - 1);
    int kq = x * pre;
    cout << "\tMn_dequy(" << x << ", " << n << ") = " << x << " * " << pre << " = " << kq << endl;
    return kq;
}
int Mn(int x, int n)
{
    int kq = 1;
    for (int i = 0; i < n; i++)
    {
        cout << "i" << (i != 0 ? "++" : "  ") << " = " << i << " < " << n << "\n\t kq = " << kq << " * " << x << " = " << kq * x << endl;
        kq *= x;
    }
    cout << "i++ = " << n << " < " << n << " false \nreturn kq = " << kq << endl;
    return kq;
}

int main(int argc, char const *argv[])
{
    int x;
    int n;
    cin >> x;
    cin >> n;
    Mn_dequy(x, n);
    cout << ".................................\n";
    Mn(x, n);
    return 0;
}