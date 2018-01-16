#include <iostream>
#include"Student.h"
#include <vector>
#include <algorithm>



using namespace std;

int main()

{
    Student student;
    vector< Student > v ;
    int n;
    cout << "n:" << endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>student.name>>student.num>>student.score;
      v.push_back(student);
    }
     sort(v.begin() , v.end());
     for(auto student:v)
     {
         print_student();
     }
    while(1);
    return 0;
}
