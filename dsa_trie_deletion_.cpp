#include<bits/stdc++.h>

using namespace std;

TrieNode* remove(TrieNode* root, string key, int depth = 0)
{
    if (!root)
        return NULL;
 
    if (depth == key.size()) {
 
        if (root->isEndOfWord)
            root->isEndOfWord = false;
 
        if (isEmpty(root)) {
            delete (root);
            root = NULL;
        }
 
        return root;
    }
 
    int index = key[depth] - 'a';
    root->children[index] =
          remove(root->children[index], key, depth + 1);
 
 
    if (isEmpty(root) && root->isEndOfWord == false) {
        delete (root);
        root = NULL;
    }
 
    return root;
}

int main(){
	
}