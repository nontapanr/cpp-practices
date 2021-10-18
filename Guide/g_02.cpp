#include <iostream>
#include <math.h>

using namespace std;

void calculateExponential(int n, float xArr[], float yArr[])
{
    float x = 0, y = 0, x2 = 0, y2 = 0, xy = 0;
    float k = 0, a0 = 0, a1 = 0;

    for (int i = 0; i < n; i++)
    {
        cout << xArr[i] << "\t" << yArr[i] << endl;
        x += xArr[i];
        y += yArr[i];
        x2 += pow(xArr[i], 2);
        y2 += pow(yArr[i], 2);
        xy += (xArr[i] + yArr[i]);
    }
    k = (n * x2) - (x * x);
    a0 = ((y * x2) - (xy * x)) / k;
    a1 = ((n * xy) - (x * y)) / k;

    cout << "K  : " << k << endl;
    cout << "a0 : " << a0 << endl;
    cout << "a1 : " << a1;
}

int main()
{
    int n;
    float xArr[100], yArr[100];

    cout << "Input a number of sample (n): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Input sample (x y): ";
        cin >> xArr[i] >> yArr[i];
    }

    calculateExponential(n, xArr, yArr);
}
