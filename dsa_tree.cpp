#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ln "\n"
template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> childern;
    TreeNode(T data)
    {
        this->data = data;
    }

};

// take input level wise
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "enter the root data " << ln;
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        
        int numOfChild;
        cout << "number of child of root node " << front->data << ln;
        cin >> numOfChild;

        for (int i = 0; i < numOfChild; i++)
        {
            int childData;
            cout << "enter the data of " << i + 1 << "th  child" << ln;
            cin >> childData;
            
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->childern.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

// print data
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " : ";
    for (int i = 0; i < root->childern.size(); i++)
    {
        cout << root->childern[i]->data << ",";
    }
    cout << ln;
    for (int i = 0; i < root->childern.size(); i++)
    {
        printTree(root->childern[i]);
    }
}


int main()
{
    fast_cin();
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *n1 = new TreeNode<int>(2);
    // TreeNode<int> *n2 = new TreeNode<int>(3);

    // // this used to connect child node n1 and n2 with root node
    // root->childern.push_back(n1);
    // root->childern.push_back(n2);
    // TreeNode<int> *n3 = new TreeNode<int>(4);
    // TreeNode<int> *n4 = new TreeNode<int>(5);
    // n1->childern.push_back(n3);
    // n1->childern.push_back(n4);

    TreeNode<int> *root = takeInputLevelWise();

    printTree(root);
    return 0;
}