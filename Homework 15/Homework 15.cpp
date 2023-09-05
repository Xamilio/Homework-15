#include <iostream>
using namespace std;
int main() 
{ 
    //1
    srand(time(NULL));
    int x[20];
    for (int i = 0; i < 20; i++)
    {
        x[i] = rand();
    }
    int max = x[0];
    int min = x[0];
    for (int i = 0; i < 20; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;
    
    //2
    int y[20];
    for (int i = 0; i < 20; i++)
    {
        cout << "Введите число: ";
        cin >> y[i];
    }
    int m = y[0];
    int n = y[0];
    for (int i = 0; i < 20; i++)
    {
        if (y[i] > m)
        {
            m = y[i];
        }
        if (y[i] < n)
        {
            n = y[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;
    system("pause");
    return 0;

    //3
    int p = y[0];
    int l = y[0];
    for (int i = 0; i < 20; i++)
    {
        if (y[i] > m);
}