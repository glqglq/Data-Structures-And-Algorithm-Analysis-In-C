#include<stdio.h>
#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
};
struct LinkedList{
public:
    Node *first;
    LinkedList(){
        first = new Node;
        first->next = NULL;
    }
    void PrintList(){
        Node *now = first->next;
        while(now){
            cout<<" "<<(now->val);
            now = now->next;
        }
        cout<<endl;
    }
    int MakeEmpty(){
        Node *now = first->next;
        int sum = 0;
        while(now){
            Node *temp = now->next;
            delete now;
            now = temp;
            sum++;
        }
        first->next = NULL;
        return sum;
    }
    int Insert(int num,int loc){//��num���뵽loc����ȥ
//            cout<<"j";
        Node *now = first;
        int nowloc = 0;
        while(now){
            if(nowloc == loc){
                Node *temp = new Node;
                temp->val = num;
                temp->next = now->next;
                now->next = temp;
                break;
            }
            now = now->next;
            nowloc++;
        }
    }
    int Delete(int loc){//ɾ��loc��Ľڵ�
        int nowloc = 0;
        Node *now = first;
        while(now){
            if(nowloc == loc){
                Node *temp = (now->next)->next;
                delete (now->next);
                now->next = temp;
                break;
            }
            now = now->next;
            nowloc++;
        }
    }
    int FindKth(int loc){//�ҵ�λ��Ϊloc��Ԫ��
        Node *now = first;
        int nowloc = 0,flag = 0;
        while(now){
            if(nowloc == loc){
                flag = 1;
                cout<<"λ����"<<loc<<"��Ԫ��ֵΪ��"<<(now->val)<<endl;
                break;
            }
            now = now->next;
            nowloc++;
        }
        if(!flag) cout<<"û���ҵ�";
    }
    int Find(int num){//����num
        Node *now = first;
        int nowloc = 0,flag = 0;
        while(now){
            if(now->val == num){
                flag = 1;
                cout<<num<<"��λ���ǣ�"<<nowloc<<endl;
                break;
            }
            now = now->next;
            nowloc++;
            if(!flag) cout<<"û���ҵ�";
        }
    }
};
int main(){
    LinkedList *l = new LinkedList;
    l->Insert(1,0);
    l->Insert(2,1);
    l->Insert(3,2);
    l->PrintList();
    l->FindKth(2);
    l->Find(2);
    l->Delete(1);
    l->PrintList();
    l->MakeEmpty();
    l->FindKth(1);
    return 0;
}
