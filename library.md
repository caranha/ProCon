
### Date Calculations

int nd,nm,ny;
int by = 1998;

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
    int ny = by;
    while (c > (365 + (leap(ny)?1:0)))
    {
        c = c - (365 + (leap(ny)?1:0));
        ny = ny + 1;
    }

    int nm = 1;
    for (;c>(leap(ny)?moffset2[nm]:moffset1[nm]);nm++)
        c -= (leap(ny)?moffset2[nm]:moffset1[nm]);
    
    int nd = c;
    // globals nd,nm,ny contain the date,month,year values (from by)
}