#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}


void QueueStack :: push(int x)
{
          q1.push(x);
     for(int i =0;i<q1.size()-1;i++){
         int t=q1.front();
         q1.pop();
         q1.push(t);
}
}


int QueueStack :: pop()
{
         if(q1.empty()){
           return -1;
       }
       int val =q1.front();
       q1.pop();
       return val;

}

