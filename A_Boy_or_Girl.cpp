#include<bits/stdc++.h>
using namespace std;
int main(){

    string st;
    cin >> st;

    vector <char> ch(st.begin(),st.end());
    
    cout << "unsorted :";
    for(auto it:ch)
    {
        cout << it << " ";
    }

    sort(ch.begin(),ch.end());

    cout << endl <<  "sorted :";
    for(auto it:ch)
    {
        cout << it << " ";
    }
  
    auto it=unique(ch.begin(),ch.end());
    ch.resize(distance(ch.begin(),it));
    cout << endl <<  "after uniqe :";
    for(auto it:ch)
    {
        cout << it << " ";
    }


    // sort(v.begin(),v.end());
  
    // v.push_back(st);

    // cout << "sort string :";
    // for(auto it:st)
    // {
    //     cout << it ;
    // } 

    // //v.erase(unique(v.begin(),v.end()),v.end()); 
    // v.unique();
    // for(auto it:st)
    // {
    //     cout << it ;
    // } 

   // cout << st;

    // list<char>v;
    // for(int i=0;i<sz;i++)
    // {
    //     char ch;
    //     cin >> ch;
    //     v.push_back(ch);
    // }

    // v.sort();
    // for(auto it:v)
    // {
    //     cout << it << " ";
    // }
    // v.unique();

    if(ch.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    } 
}