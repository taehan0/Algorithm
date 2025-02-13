#include <iostream>
int main()
{
    int N;
    std::cin >> N;
    int count = 0;
    int inum = 666;

    while(1)
    {
        std::string num = std::to_string(inum);

        for (int i = 0; i < num.length() - 2; i++)
        {
            
            if (num[i]=='6'&&num[i+1]=='6'&&num[i+2]=='6')
            {
                count++;
                if(count==N)
                {
                    std::cout << num;
                    return 0;
                }
                break;
            }
        }
        inum++;
    }
}