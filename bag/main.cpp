#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
    string bagName;
    int sumPrice;
} BagNameSumPrice;
bool cmp(BagNameSumPrice a,BagNameSumPrice b)
{
  return a.sumPrice<b.sumPrice;
}

int main()
{
    int n;
    cout << "n:" << endl;
    cin>>n;
    map<string,int> cNamePriceMap;
    string cName;
    int price;
      for(int i=0;i<n;i++)
    {
        cin>>cName>>price;
        cNamePriceMap.insert(make_pair(cName,price));

    }
    vector< BagNameSumPrice > v ;
    int m;
    cout << "m:" << endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    string bagName;
    cin>>bagName;
    int k;
    int sumPrice=0;
    for(int i=0;i<k;i++)
    {
       string cName;
       cin>>cName;
     auto it=cNamePriceMap.find(cName);
    sumPrice=it->second+sumPrice;
    }
    BagNameSumPrice bagNameSumPrice;
    bagNameSumPrice.bagName=bagName;
    bagNameSumPrice.sumPrice=sumPrice;
     v.push_back(bagNameSumPrice);
    }

    sort(v.begin() , v.end(),cmp);
    for(auto bnsp:v)
    {
        cout<<bnsp.bagName<<" "<<bnsp.sumPrice<<endl;
    }


    while(1);
    return 0;
}
