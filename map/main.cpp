#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "n:" << endl;
    cin >>n;
    map<string,int> nameAgeMap;
    string name;
    int age;
    for(int i=0;i<n;i++)
    {
        cin>>name>>age;
        nameAgeMap.insert(make_pair(name,age));

    }
    int m;
    cout << "m:" << endl;
    cin >>m;
    for(int i=0;i<m;i++)
    {
        cin>>name;
        auto it=nameAgeMap.find(name);
        if(it==nameAgeMap.end()){
            cout<<name<<"������"<<endl;
        }
        else{
            cout<<name<<"����"<<it->second<<"����"<<endl;
        }
    }

    while(1);
    return 0;
}
