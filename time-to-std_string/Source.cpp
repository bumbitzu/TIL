#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;
string time_to_std_string(const char* format)
{
    // Get the current time
    time_t now_time = time(nullptr);

    // Convert the current time to the "tm" structure
    tm structTime;
    localtime_s(&structTime, &now_time);

    // Convert the current time to a string
    const unsigned size = (sizeof(format)/sizeof(format[0]))+1;
    char time_string[size];
    strftime(time_string, sizeof(time_string), format, &structTime);

    string std_string_time(time_string);
    return std_string_time;
}
int main()
{
    string time = time_to_std_string("%H:%M:%S");
    cout << time;
}
