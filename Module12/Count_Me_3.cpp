#include<iostream>
#include<string>
using namespace std;

int main ()
{
    

    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    int capitala = 0;
    int smalla= 0;
    int digitsa = 0;
    
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            capitala++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            smalla++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            digitsa++;
        }
    }

    cout<<capitala<<" "<<smalla<<" "<<digitsa<<endl;

    int capitalb = 0;
    int smallb= 0;
    int digitsb = 0;
    
    for(int i=0;i<b.length();i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            capitalb++;
        }
        else if(b[i]>='a' && b[i]<='z')
        {
            smallb++;
        }
        else if(b[i]>='0' && b[i]<='9')
        {
            digitsb++;
        }
    }

    cout<<capitalb<<" "<<smallb<<" "<<digitsb<<endl;


    return 0;
}

