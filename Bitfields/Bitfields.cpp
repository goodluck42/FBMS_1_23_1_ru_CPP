#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


// 17bits of 32bits
// 33bits of 64bits
struct Time
{
    unsigned int hours : 5; // 0 - 24
    unsigned int minutes : 6; // 0 - 60
    unsigned int seconds : 6; // 0 - 60
};

struct Student
{
    char name[32];
};

struct Test
{
    unsigned int a : 1;
    unsigned int b : 1;
};

void print(Time* time)
{
    std::cout << "hours = " << time->hours << '\n';
    std::cout << "minutes = " << time->minutes << '\n';
    std::cout << "seconds = " << time->seconds << '\n';
}

int main(int argc, char* argv[])
{
    /*{
        time_t l_time{};

        l_time = time(&l_time);
    
        tm* current_time = std::localtime(&l_time);

        std::cout << "Year: " << 1900 + current_time->tm_year << '\n';
        std::cout << "Month: " << 1 + current_time->tm_mon << '\n';
        std::cout << "Day (year): " << current_time->tm_yday << '\n';
        std::cout << "Day (week): " << current_time->tm_wday << '\n';
        std::cout << "Day (month): " << current_time->tm_mday << '\n';
        std::cout << "Hours: " << current_time->tm_hour << '\n';
        std::cout << "Minutes: " << current_time->tm_min << '\n';
        std::cout << "Seconds: " << current_time->tm_sec << '\n';
    }*/

    Test obj;

    obj.a = 0;
    obj.b = 0;

    int* data = (int*)&obj;

    // 0b10
    // |
    // 0b01
    *data = *data | 0b11;

    std::cout << obj.a << '\n';
    std::cout << obj.b << '\n';
    
    
    
    // delete current_time;
        
    // std::cout << 0b11111 << '\n'; // 1 + 2 + 4 + 8 + 16
    // std::cout << 0b111111 << '\n';
    
    // Time time;
    //
    // time.hours = 20;
    // time.minutes = 39;
    // time.seconds = 50;
    //
    // print(&time);
    
    return 0;
}
