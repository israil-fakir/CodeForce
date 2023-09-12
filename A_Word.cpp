#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;

 //   vector<char>ch(st.begin(),st.end());

  //  cout << "the mess" << endl;

    // for(auto it:ch)
    // {
    //     cout <<it << " ";
    // }

    // cout << endl ;
    // cout << "size :"<< st.size();

    int low = 0;
    int upper = 0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i] >='a'  && st[i] <='z')
        {
            low++;
        }       
        else
        {
            upper++;
        }
    }
    // cout << endl << "lower case :" << low ;
    // cout << endl << "upper case :" << upper;    

    if(low>=upper)
    {
        
         transform(st.begin(),st.end(),st.begin(),::tolower);
       
        // for (int  i = 0; i < st.size(); i++)
        // {
        //    st[i]=toupper(st[I]);
        // }
        
    }
    else{
         transform(st.begin(),st.end(),st.begin(),::toupper);
    }
   
   cout << endl << st<<endl;

}