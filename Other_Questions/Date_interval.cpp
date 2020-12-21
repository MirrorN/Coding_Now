#include<bits/stdc++.h>
using namespace std;

/*
Compute the interval of two date.
Example:
date1 = 2011.11.3
date2 = 2011.11.5
date_interval = 3
*/

int dayofmonth[13][2] = {0,0,31,31,28,29,31,31,30,30,31,31,30,30,31,31,31,31,30,30,31,31,30,30,31,31};
int sav[5001][13][32];

bool isleap(int year){
    return year%100!=0&&year%4==0 || year%400==0;
}

int abs(int a){
    return a>=0?a:-a;
}

struct Date{
    int year;
    int month;
    int day;

    void nextday(){
        day ++;
        if(day > dayofmonth[isleap(year)][month]){
            day = 1;
            month ++;
            if(month > 12){
                month = 1;
                year ++;
            }
        }
    }
};

int main(){
    int y1 = 2015;
    int y2 = 2015;
    int m1 = 10;
    int m2 = 10;
    int d1 = 15;
    int d2 = 17;
    
    Date date;
    date.year = 0;
    date.month = 1;
    date.day = 1;
    int cnt = 0;
    while(date.year != 5000){
        sav[date.year][date.month][date.day] = cnt;
        cnt++;
        date.nextday();
    }
    cout<<abs(sav[y1][m1][d1] - sav[y2][m2][d2]) + 1<<endl;
    return 0;
}