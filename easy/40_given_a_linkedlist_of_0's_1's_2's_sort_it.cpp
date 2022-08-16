#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;



class Solution
{
    public:

    Node* segregate(Node *head) {
       if(head==NULL) return head;
       int zero=0,one=0,two=0;
       Node*curr=head;
       while(curr!=NULL) {
           if(curr->data==0) zero++;
           else if(curr->data==1)  one++;
           else two++;
          curr=curr->next;
       }
       curr=head;
       do{
           if(zero) {curr->data=0; --zero;}
          else if(one) {curr->data=1;--one;}
           else if(two) {curr->data=2;--two;}
           curr=curr->next;
       }while(curr!=NULL);
       return head;


    }
};



void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void insert(int n1) {
    int n, value, i;

    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}

