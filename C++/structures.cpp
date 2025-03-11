// Time: 5:24.97
// Time for changes: 1:01.63
// Total time: 6:26
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int age[4] = {22, 23, 21, 24};
    int salary[4] = {20000, 300000, 40000, 300000};
    string name[4] = {"MD Niaz", "MD Mahir", "MD Chomu", "MD Chompa"};
    for (int i = 0; i < 4; i++)
    {
        cout << "Name: " << name[i] << " Age: " << age[i] << " Salary: " << salary[i] << endl;
    }

    return 0;
}

// Time: 5:11.14
// Time for changes: 1:42.78
// Total time: 6:54
#include <iostream>
#include <string>

using namespace std;

struct info
{
    int age, salary;
    string name;
};
int main()
{
    info person1;
    person1.age = 22;
    person1.salary = 200000;
    person1.name = "MD Niaz";

    info person2 = {23, 300000, "MD Mahir"};

    info person3 = {21, 400000, "MD Chomu"};

    info person4 = {24, 400000, "MD Chompa"};
    cout << "Name: " << person1.name << " Age: " << person1.age << " Salary: " << person1.salary << endl;
    cout << "Name: " << person2.name << " Age: " << person2.age << " Salary: " << person2.salary << endl;
    cout << "Name: " << person3.name << " Age: " << person3.age << " Salary: " << person3.salary << endl;
    cout << "Name: " << person4.name << " Age: " << person4.age << " Salary: " << person4.salary << endl;

    return 0;
}
