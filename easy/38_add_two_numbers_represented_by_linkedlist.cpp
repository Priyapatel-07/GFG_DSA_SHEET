#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;

    Node* head = new Node(val);
    Node* tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}




struct Node {
    int data;
    struct Node* next;

class Solution
{
     Node *reverse(Node *head)
   {
       Node *prev=NULL;
       Node *curr=head;
       Node *next;
       while(curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       return prev;
   }

    public:
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       first=reverse(first);
       second=reverse(second);

       int carry=0;
       Node *ret=new Node(10);
       Node *temp=ret;

       while(first!=NULL&&second!=NULL)
       {
           int sum=first->data+second->data+carry;
           int add=sum%10;
           carry=sum/10;

           temp->next=new Node(add);
           temp=temp->next;
           first=first->next;
           second=second->next;
           }

       if(first==NULL)
       {
           while(second!=NULL)
           {
               int sum=carry+second->data;
               int add=sum%10;
               carry=sum/10;
               temp->next=new Node(add);
               temp=temp->next;
               second=second->next;
           }

       }
       else if(second==NULL)
       {
           while(first!=NULL)
           {
                int sum=carry+first->data;
               int add=sum%10;
               carry=sum/10;
               temp->next=new Node(add);
               temp=temp->next;
               first=first->next;
           }
       }

       while(carry>0)
       {
           int add=carry%10;
           carry=carry/10;

           temp->next=new Node(add);
           temp=temp->next;
       }
       return reverse(ret->next);
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;

        cin>>n;
        Node* first = buildList(n);

        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

