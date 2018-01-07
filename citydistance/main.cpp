#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct{
    int x;
    int y;
} CityLocation;
typedef struct{
    string cityName;
    float dis;
} CityDistance;
bool cmp(CityDistance a,CityDistance b)
{
  return a.dis<b.dis;
}
int main()
{
    int n;
    cout << "n:" << endl;
    cin>>n;
    map<string,CityLocation> cityNameLocationMap;
    string cityName;
    CityLocation location;
      for(int i=0;i<n;i++)
    {
        cin>>cityName>>location.x>>location.y;
        cityNameLocationMap.insert(make_pair(cityName,location));

    }
    cout<<"×ø±ê:"<<endl;
    cin>>location.x>>location.y;
    vector< CityDistance > v ;
    for(auto p:cityNameLocationMap)
    {
        float dis;
        dis=sqrt((location.x-p.second.x)*(location.x-p.second.x)+
                 (location.y-p.second.y)*(location.y-p.second.y));
        CityDistance cityDistance;
         cityDistance.cityName=p.first;
         cityDistance.dis=dis;
          v.push_back(cityDistance);
    }

   sort(v.begin() , v.end(),cmp);
    for(auto distance:v)
    {
        cout<<distance.cityName<<"¾àÀë "<<distance.dis<<endl;
    }




    while(1);
    return 0;
}
