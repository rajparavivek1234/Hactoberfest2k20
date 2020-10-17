#include<iostream>
using namespace std;
class str
{
    string s;
public:
    room()
    {
         s={};
    }
    operator <(str p)
    {
        if(s<p.s)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    void ip()
    {
        cin>>s;
    }
    void op()
    {
        cout<<s<<"\n";
    }

};
int main()
{
    str a,b;
    a.ip();
    b.ip();
    int t=a<b;
    cout<<"-------------\n";
    if(t==0)
    {
        b.op();
        a.op();
    }
    else
    {
        a.op();
        b.op();
    }
}

