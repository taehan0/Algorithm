#include <iostream>
#include <vector>
#include <algorithm>
class Person
{
    public:
        int age;
        int num;
        std::string name;
        Person (int x,std::string y,int z)
        :age(x),name(y),num(z){}
        Person ()
        :age(0),name(" "),num(0){}

        bool operator<(const Person &p1) const
        {
            if(this->age==p1.age)
            {
                return this->num < p1.num;
            }
            return this->age < p1.age;
        }
};

int main()
{
    int N;
    std::cin >> N;
    int age;
    std::string name;
    std::vector<Person> Arr;

    for (int i = 0; i < N;i++)
    {
        std::cin >> age >> name;
        Arr.emplace_back(age,name,i);
    }

    sort(Arr.begin(), Arr.end());

    for (int i = 0; i < N;i++)
    {
        std::cout << Arr[i].age << " " << Arr[i].name << '\n';
    }

        return 0;
}