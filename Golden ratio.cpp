#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    const int N = 10;
    long long fibonacci[N];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < N; ++i) 
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    cout << "Fibonacci Sequence up to " << N << " terms:\n";
    for (int i = 0; i < N; ++i) 
    {
        cout << fibonacci[i] << " ";
    }
    cout << "\n\nApproximations of the Golden Ratio:\n";

    for (int i = 2; i < N; ++i) 
    {
        double ratio = static_cast<double>(fibonacci[i]) / fibonacci[i - 1];
        cout << "Fibonacci(" << i << ") / Fibonacci(" << i - 1 << ") = " 
             << fixed << setprecision(40) << ratio << "\n";
    }

    return 0;
}