//���ִ��߽����ٵ���
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char dic[4][5] = {"this","wats","oahg","fgdt"};
    char words[4][5] = {"this","two","fat","that"};
    for(int i = 0; i < 4; i++) //��
        for(int j = 0; j < 4; j++) //��
            for(int m = 0; m < 8; m++) //����
                for(int n = 1; n < 4; n++) //�ߵĲ�����һ��Ҫ��ȷÿ����������������壩
                {
                    int ijia = 0,jjia = 0;//�������
                    if(!m)//����
                    {
                        if(j + n >= 4) break;
                        jjia = 1;
                    }
                    else if(m == 1)//�ϵ���
                    {
                        if(i + n >= 4) break;
                        ijia = 1;
                    }
                    else if(m == 2)//���ϵ�����
                    {
                        if(i + n >= 4 || j + n >= 4) break;
                        ijia = 1;
                        jjia = 1;
                    }
                    else if(m == 3)//���µ�����
                    {
                        if(i - n < 0 || j - n < 0) break;
                        ijia = -1;
                        jjia = -1;
                    }
                    else if(m == 4)//���ϵ�����
                    {
                        if(i + n >= 4 || j - n < 0) break;
                        ijia = 1;
                        jjia = -1;
                    }
                    else if(m == 5)//���µ�����
                    {
                        if(i - n < 0 || j + n >= 4) break;
                        ijia = -1;
                        jjia = 1;
                    }
                    else if(m == 6)//�ҵ���
                    {
                        if(j - n < 0) break;
                        jjia = -1;
                    }
                    else if(m == 7)//�µ���
                    {
                        if(i - n < 0) break;
                        ijia = -1;
                    }





                    char compa[5];
                    int ibegin = i,jbegin = j,biao = 0;
                    for(int l = 0; l <= n; l++)
                    {
                        compa[biao++] = dic[ibegin][jbegin];
                        ibegin += ijia;
                        jbegin += jjia;
                    }
                    compa[n + 1] = '\0';
                    //cout<<"-"<<compa<<endl;
                    for(int l = 0; l < 4; l++)
                        if(!strcmp(compa,words[l]))
                            cout<<compa<<endl;
                }
    return 0;
}
