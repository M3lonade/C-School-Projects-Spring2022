
#include <iostream>

using namespace std;

void evenOrOdd(int num);
int sum(int start, int end);
int absoluteValue(int num);
double max(double x, double y, double z);

int main()
{
    int userChoice;
    cout << "Pick one of the following options:" << endl;
    cout << "1) Even or Odd" << endl;
    cout << "2) Sum" << endl;
    cout << "3) Absolute Value" << endl;
    cout << "4) 3-Number Max" << endl;
    cin >> userChoice;

    switch (userChoice)
    {
        case 1:
        {
            int value;
            cout << "Enter a numeric value: ";
            cin >> value;
            evenOrOdd(value);
            break;
        }
        case 2:
        {
            int start, end;
            cout << "Enter the starting point: ";
            cin >> start;
            cout << "Enter the ending point: ";
            cin >> end;
            cout << "The sum is " << sum(start, end) << endl;
            break;
        }
        case 3:
        {
            int value;
            cout << "Enter a numeric value: ";
            cin >> value;
            cout << "The absolute value of the entry is " << absoluteValue(value) << endl;
            break;
        }
        case 4:
        {
            double x, y, z;
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            cout << "Enter the third number: ";
            cin >> z;
            cout << "The maximum of the entered value is " << max(x, y, z) << endl;
        	break;
        }
        default:
        {
            cout << "You did not enter valid input." << endl;
            break;
        }
    }

    return 0;
}

void evenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "The given value is even." << endl;
    }
    else
    {
        cout << "The given value is odd." << endl;
    }
}

int sum(int start, int end)
{
    int sum = 0;

    for (int i = start; i < end; ++i)
    {
        sum += i;
    }

    return sum;
}

int absoluteValue(int num)
{
    if (num > 0)
    {
        return num;
    }
    else
    {
        return -num;
    }
}

double max(double x, double y, double z)
{
    double temp;
    if (x > y)
    {
        temp = x;
    }
    else
    {
        temp = y;
    }

    if (temp > z)
    {
        return temp;
    }
    else
    {
        return z;
    }
}