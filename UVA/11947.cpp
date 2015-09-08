#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int nd,nm,ny;
int by = 0;

int moffset1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int moffset2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int yy)
{
    if (yy%400 == 0)
        return true;
    if (yy%100 == 0)
        return false;
    if (yy%4 == 0)
        return true;
    return false;
}

int date2number(int d, int m, int y)
{
    int ret = d;
    for (int i = 0; i < m; i++)
        if (leap(y))
            ret = ret + moffset2[i];
        else
            ret = ret + moffset1[i];
    for (int i = y; i > by; i--)
        if (leap(i-1))
            ret = ret + 366;
        else        
            ret = ret + 365;
    return ret;
}

void number2date(int c)
{
    int ry = by;
    while (c > (365 + (leap(ry)?1:0)))
    {
        c = c - (365 + (leap(ry)?1:0));
        ry = ry + 1;
    }

    int rm = 1;
    for (;c>(leap(ry)?moffset2[rm]:moffset1[rm]);rm++)
        c -= (leap(ry)?moffset2[rm]:moffset1[rm]);
    
    int rd = c;
        
    nd = rd;
    ny = ry;
    nm = rm;
}

string res[13] = {"capricorn","aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"};

int zodiac(int m, int d)
{    
    int month[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int day[13] = {21,20,21,21,22,22,23,22,24,24,23,23,32};
    
    for (int i = 0; i < 13; i++)
        if (m < month[i] || (m == month[i] && d < day[i]))
            return i;
    
    return 12;
}

int main()
{
    int n;
    string input;
    int d,m,y;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        m = stoi(input.substr(0,2));
        d = stoi(input.substr(2,2));
        y = stoi(input.substr(4,4));
        
        number2date(date2number(d,m,y)+40*7);
        
        cout << i+1 << " ";
        cout << setfill('0') << setw(2) << nm << "/";
        cout << setfill('0') << setw(2) << nd << "/" <<  ny << " ";
        cout << res[zodiac(nm,nd)] << "\n";
    }    
}