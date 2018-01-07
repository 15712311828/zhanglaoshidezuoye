#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
  return a>b;
}

int main()
{
    int n;
    cout << "n:" << endl;
    cin >>n;
    int t;
    vector< int > v ;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin() , v.end(),cmp);
    for(auto i:v)
    {
        cout<<i<<" ";
    }



    while(1);
    return 0;
}
