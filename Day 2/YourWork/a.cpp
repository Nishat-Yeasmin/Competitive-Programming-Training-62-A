//Pair
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<string, double>,pair<int,pair<int,double> > > p[5];

    p[0].first.first = "Nishat";
    p[0].first.second = 3.95;
    p[0].second.first = 100;
    p[0].second.second.first = 19;
    p[0].second.second.second = 3.90;

    cout<<"Name: "<<p[0].first.first<<endl;
    cout<<"CGPA: "<<p[0].second.second.second<<endl;

    //Reverse
    string a = "Nishat" ;
     string b = "Yeasmin";

     reverse(a.begin(), a.end());
     cout<<"Reverse: "<<a<<endl;

     reverse(b.begin()+3,b.begin()+5);
     cout<<b<<endl;

   //Sort

   sort(b.begin(),b.end());
   cout<<"Sorting of Yeasmin: "<<b<<endl;

   string c = "jlgowerhfsdlgkjserothjilreghfkslhi";
   int cnt = count(c.begin(),c.end(),'l');
   cout<<"Number of l: "<<cnt<<endl;

   //vector

   vector<int> v;
   
   v.push_back(17);
   v.push_back(5);
   v.push_back(2);
   v.push_back(15);
   v.push_back(17);
   v.push_back(6);
   v.push_back(9);
   v.push_back(1);
   v.push_back(4);
   v.push_back(5);

   cout<<"Numbers are: ";
for (int i=0;i<v.size();i++)
   {
     cout<<v[i]<<" ";
   }

   sort(v.begin(), v.end());
   
   cout<<"\nSorted the numbers: ";
   for (int i=0;i<v.size();i++)
   {
     cout<<v[i]<<" ";
   }

}

