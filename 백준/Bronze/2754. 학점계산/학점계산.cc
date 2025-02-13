#include <iostream>

int main()
{
    char grade[3] ={0,};
    std::cin >> grade;
    float score;

    switch (grade[0])

    {case 'A':
    {
        score = 4.0;
        break;
    }
    case 'B':
    {
        score = 3.0;
        break;
    }
    case 'C':
    {
        score = 2.0;
        break;
    }
    case 'D':
    {
        score = 1.0;
        break;
    }
    default:
    {
        score = 0;
    }
    }

    switch (grade[1])
    {
        case '+':
        {
            score += 0.3;
            break;
        }
        case '-':
        {
            score -= 0.3;
            break;
        }
    }

    printf("%0.1f", score);
}
