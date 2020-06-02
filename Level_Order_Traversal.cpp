/**
 * Title   : Tree: Level Order Traversal
 * Author  : Tridib Samanta
 * Created : 02-06-2020
 * Link    : https://www.hackerrank.com/challenges/tree-level-order-traversal/problem
 **/

#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {

        if (root == NULL)
            return;

        queue<Node *> q;
        q.push(root);

        while(!q.empty()) {
            Node *temp = q.front();
            q.pop();
            cout << temp -> data << ' ';
            if (temp -> left) q.push(temp -> left);
            if (temp -> right) q.push(temp -> right);
        }

    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.levelOrder(root);

    return 0;
}
