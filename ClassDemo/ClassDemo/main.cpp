#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    auto stu=new Student("lanjie.li","20144051",98);
    stu->print();
    while(1);
    return 0;
}
