// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


 // } Driver Code Ends
/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


 vector<int>v1,v2;

void ro1(Node *root)
{
   if(root==NULL) return;
   v1.push_back(root->data);
   ro1(root->left);
   ro1(root->right);
}

void ro2(Node *root)
{
   if(root==NULL) return ;
   v2.push_back(root->data);
   ro2(root->left);
   ro2(root->right);

}

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
          ro1(r1);
       vector<int>q1=v1;
       v1.clear();
       ro2(r2);
       vector<int>q2=v2;
       v2.clear();
       if(q1.size()!=q2.size()) return false;
      for(int i=0;i<q1.size();i++)
      {
          if(q1[i]!=q2[i]) return false;
      }
      return true;
    }
};

// { Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}  // } Driver Code Ends
