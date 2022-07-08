#include <iostream>
using namespace std;

class Data
{
public:
    float x;
    float y;
};

float interpolate(Data d[], float x1, float len)
{
    double sum = 0;
    for (int i = 0; i < len; i++)
    {

        double term = d[i].y;
        for (int j = 0; j < len; j++)
        {
            if (j != i)
            {
                term *= (x1 - d[j].x) / (d[i].x - d[j].x);
            }
        }
        sum += term;
    }
    return sum;
}
int main()
{
    Data d[100];
    float x;
    float n;
    cout << "Enter no of values to be entered \n";
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cout << "Enter value of x ";
        cin >> d[j].x;
        cout << "Enter its f(x) value ";
        cin >> d[j].y;
    }

    cout << "Enter interpolating data point ";
    cin >> x;
    cout << "\n The interpolating value obtained at " << x << " is " << interpolate(d, x, n);
    return 0;
}