   #include<iostream>
   #include<vector>
   #include<algorithm>
   using namespace std;
   int main()
   {
    vector<int>v{1,4,3,2,5};
    sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<" ";
    return 0;
   }
