#include <iostream>
#include <ctime>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    time_t timer = time(nullptr);
    //tm time{};
    //localtime_s(&time, &timer);

    //std::cout << time.tm_year + 1900 << "-"
    //    << time.tm_mon + 1 << "-"
    //    << time.tm_mday;
    tm* time = localtime(&timer);
    std::cout << time->tm_year + 1900 << "-";

    std::cout.width(2);
    std::cout.fill('0');
    std::cout << time->tm_mon + 1 << "-";

    std::cout.width(2);
    std::cout.fill('0');
    std::cout << time->tm_mday;

    return 0;
}
