#include <iostream>
#include <cmath>
using namespace std;

//1 
/* int main()
{
    int k; int n;
    cin >> k >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * k;
    }
    cout << sum;
}*/

//3 
/*int len(int num)
{
    int len = 0;
    while (num != 0) {
        len += 1;
        num = num / 10;
    }
    return len;
}

int crop(int n, int k)
{
    while (len(n) > k) {
        n = n / 10;
    }
    return n;
}

int main()
{
    int x; int y;
    cin >> x >> y;
    cout << crop(x, y);
}*/

//6 
/*int main()
{
    int x;
    cin >> x;
    if (x != 2 and x != 3 and (x % 2 == 0 or x % 3 == 0)) cout << "this number is composite";
    else cout << "this number is not composite";
}*/

//5 
/*int main() {
    double x;
    cin >> x;
    double yi = x;
    double y0 = 0;
    while (abs(yi - y0) >= pow(10, -5)) {
        y0 = yi;
        yi = 0.5 * (y0 + 3 * x / (2 * pow(y0, 2) + x / y0));
    }
    cout << yi;
}*/

//2
/*int maximum(int a, int b, int c) {
    int d = max(a, b);
    int e = max(d, c);
    return e;
}

int main()
{
    int x[3] = { 1, 1, 5 };
    int y[3] = { 1, 5, 5 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (i != j and j != k and i != k) {
                    cout << i << j << k << endl;
                    if (x[i] == x[j] and (abs(y[i] - y[j]) == (abs(x[k] - x[i]) | abs(x[k] - x[j])))) {
                        cout << maximum(x[0], x[1], x[2]);
                    }
                }
            }
        }
    }
    // if x[i] == x[j] and abs(y[i] - y[j]) == abs(x[k] - max(x[i], x[j])
}*/

//4 
/*double one(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + 1 / one(n - 1);
}

int main() {
    int n;
    cin >> n;

    double answer = one(n);
    cout << answer;
}*/