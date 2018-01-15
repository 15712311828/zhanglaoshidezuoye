#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
using namespace std;

int main()
{
    vector<Student> v;
    v.push_back(Student("lanjie.li","20144051",98));
    v.push_back(Student("aaa","20144051",92));
    v.push_back(Student("bbb","20144051",94));
    sort(v.begin(),v.end());
    for(Student stu:v){
      stu.print();
    }
    while(1);
    return 0;
}
