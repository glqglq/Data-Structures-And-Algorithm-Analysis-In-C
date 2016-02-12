#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include<algorithm>
using namespace std;
void BubbleSort(int num[],int n)
{
    for(int i = 0;i < n - 1;i++)//��Ϊ���һ��ɨ����Զ�������С�ģ�����ɨ���һ��
        for(int j = 0;j < n - i - 1;j++)
            if(num[j] > num[j + 1]) swap(num[j],num[j + 1]);
}
void fun1(const int &k)
{
    int num[150],i = 0;
    while(cin>>num[i++]);
    BubbleSort(num,i);
    cout<<num[k - 1]<<endl;
}
void fun2(const int &k)
{
    int num[150],i = 0;
    while(cin>>num[i++]);
    BubbleSort(num,k);
    for(int j = k + 1;j < i;j++)
        if(num[j] > num[k])
            swap(num[k],num[j]);
    cout<<num[k]<<endl;

}
int main()
{
    int k;
    cin>>k;
    fun1(k);
    fun2(k);
    return 0;
}
