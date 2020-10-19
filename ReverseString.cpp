#include<iostream>
using namespace std;

int main()
{
    int begin,end,count=0;

    char s[100], r[100];
    cout<<"enter the string"<<endl;
    gets(s);

    while(s[count] !='\0')
    count++;
    end=count-1;
    for(begin=0; begin<count;begin++)
    {
        r[begin]= s[end];
        end--;
    }
    r[begin]= '\0';
    cout<<r<<endl;

    return 0;
}
