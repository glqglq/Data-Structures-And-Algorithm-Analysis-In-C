#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int maxsubsequencesum1(int a[],int n)
{
int maxsum = 0;
	for(int i = 0;i < n;i++)
for(int j = i;j < n;j++)
{
	int sum = 0;
	for(int k = i;k < j;k++)
		sum += a[k];
	if(sum > maxsum) maxsum = sum;
}
		return maxsum;
}

int maxsubsequencesum2(int a[],int n)
{
	int maxsum = 0,thissum;
	for(int i = 0;I < n;i++)
	{
		thissum = 0;
		for(int j = I;j < n;j++)
		{
			thissum += a[j];//��thissum�洢
			if(thissum > maxsum)
				maxsum = thissum;
}
}
return maxsum;
}

int maxsubsequencesum3(const int *num,int left,int right)
{
    //��׼���
    if(left == right)
        if(num[left] > 0)//why?�����⣡��������
            return num[left];
        else return 0;

    //��������
    int middle = (right - left)/2 + left;
    int maxleft = maxsubsequencesum(num,left,middle);//���ߣ�ע�����ﺯ���з���ֵ
    int maxright = maxsubsequencesum(num,middle + 1,right);//�Ұ��

    //�����Խ
    int maxleftboarder = 0,maxrightboarder = 0,maxthissum = 0;;
    for(int i = middle; i >= left; i--)
    {
        maxthissum += num[i];
        if(maxthissum > maxleftboarder)
            maxleftboarder = maxthissum;
    }
    maxthissum = 0;
    for(int i = middle + 1; i <= right; i++)
    {
        maxthissum += num[i];
        if(maxthissum > maxrightboarder)
            maxrightboarder = maxthissum;
    }
    return max(max(maxleft,maxright),maxleftboarder + maxrightboarder);//�������ǳ���ĳ��ڣ�һ��Ҫ�����׷���ֵ��
}
int maxsubsequencesum4(const int *a)
{
    int maxsum = thissum = 0;
    for(int i = 0;i < n;i++)
    {
        thissum += a[i];
        if(thissum > maxsum) maxsum = thissum;
        if(thissum < 0) thissum = 0;
    }
}
int a[1006];
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cout<<maxsubsequencesum1(a,n);
    cout<<maxsubsequencesum2(a,n);
    cout<<maxsubsequencesum3(a,0,n - 1);
    cout<<maxsubsequencesum4(a,n);
    return 0;
}
