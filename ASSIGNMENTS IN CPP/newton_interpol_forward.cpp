#include <iostream>
#include <iomanip>
using namespace std;

double diffcall(double u, int n)
{
    double temp = u;
    for (int i = 1; i < n; i++)
    {
        temp *= (u - i);
    }
    return temp; //u-1*u-2
}

// calculation of the factorial as mentioned
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i; //2//6
    }
    return f;
}
int main()
{
    int n;        // no of values
    double value; //value to be interpolated
    double arrtop[100];
    std::cout << "Enter no of values \n"
              << std::endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter value of top row at  " << i << " th place ";
        cin >> arrtop[i];
    }

    // now for the difference table we take input a 2d array and the input is taken as [y][0]
    double ar[100][100];
    for (int i = 0; i < n; i++)
    {
        cout << " Enter value at  " << i << " th place ";
        cin >> ar[i][0];
    }
    // this table calculates the forward difference
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ar[j][i] = ar[j + 1][i - 1] - ar[j][i - 1];
        }
    }
    // this table displays the forward difference
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << arrtop[i] << "\t";

        for (int j = 0; j < n - i; j++)
        {
            cout << setw(4) << ar[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Enter the value u want to interpolate \n";
    cin >> value;

    double sum = ar[0][0];
    double u = (value - arrtop[0]) / (arrtop[1] - arrtop[0]);

    for (int i = 1; i < n; i++)
    {
        sum += ((diffcall(u, i) * ar[0][i])) / fact(i);
    }
    cout << "\n Value at " << value << " is " << sum << endl;
    return 0;
}
