#include<iostream>
using namespace std;
//Ҫ��a>b
int gcd1(int a,int b)//�ݹ�
{
    if(!b) return a;
    return gcd1(b,a%b);
}
int gcd2(int a,int b)//����
{
    while(b)
    {
        int temp = a;
        a = b;
        b = temp % a;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd1(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
    return 0;
}
