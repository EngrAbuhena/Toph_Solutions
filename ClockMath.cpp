// Clock Math
// ACCEPTED
// Author @ Abuhena Rony
#include <iostream>

using namespace std;

int main()
{
    int hour = 0;
    int minute = 0;
    double hour_angle = 0;
    double minute_angle = 0;
    double hour_to_minute = 0;
    double minute_to_hour = 0;
    cin >> hour;
    cin >> minute;
    if (0 <= hour < 12 and 0 <= minute < 60)
    {
        hour_angle = 360 - 30 * hour - minute * 0.5;
        // cout<<hour_angle;
        minute_angle = 6 * minute;
        // cout<<minute_angle;
        hour_to_minute = hour_angle + minute_angle;
        minute_to_hour = 360 - hour_to_minute;
        if (hour_to_minute < minute_to_hour)
            cout << hour_to_minute;
        else
            cout << minute_to_hour;
    }
}