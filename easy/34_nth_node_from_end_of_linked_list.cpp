#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(struct Node* head, int n);

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
             cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}

int getNthFromLast(Node *head, int n)
{
       Node *first=head;
       Node *second=head;
       while(n--){
           if(first!=NULL)
           first=first->next;
           else
            return -1;
       }
       if(first==NULL) return head->data;
       while(first->next!=NULL){
           first=first->next;
           second=second->next;
       }
       return second->next->data;
}
