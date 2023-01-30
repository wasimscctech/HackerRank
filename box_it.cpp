#include <bits/stdc++.h>
#include <iostream>

using namespace std;
// Implement the class Box
class Box
{
private:
    int l, b, h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    Box(Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    } // Return box's length
    int getBreadth()
    {
        return b;
    } // Return box's breadth
    int getHeight()
    {
        return h;
    } // Return box's height
    long long CalculateVolume()
    {
        long long vol;
        vol = l * b;
        return vol * h;
    }
    // Overload operator < as specified
    // bool operator<(Box& b){
    bool operator<(Box &temp)
    {
        if (l < temp.l)
            return true; // l, b and h is for NewBox and temp.l is for temp.l
        else if (b < temp.b && l == temp.l)
            return true;
        else if (h < temp.h && b == temp.b && l == temp.l)
            return true;
        else
            return false;
    }
    // Overload operator << as specified
    // ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<<(ostream& cout, Box& B)
    {
        cout << B.l<<" "<< B.b<<" "<< B.h;
        return cout;
    }

    // friend istream &operator>>(istream &in, Box& B)
    // {
    //     cout << "Enter Real Part ";
    //     in >> B;
    //     cout << "Enter Imaginary Part ";
    //     in >> c.imag;
    //     return in;
    // }
};

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}