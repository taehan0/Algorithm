#include <iostream>
#include <ctime>

int main()
{
    time_t timer = time(NULL);

    struct tm *t = localtime(&timer);

    std::cout << 1900 + t->tm_year << '-' << ((t->tm_mon + 1 < 10) ? ("0" + std::to_string(t->tm_mon+1)) : std::to_string(t->tm_mon+1))<< '-' << ((t->tm_mday < 10)? "0" + std::to_string(t->tm_mday): std::to_string(t->tm_mday));

    
    return 0;
}