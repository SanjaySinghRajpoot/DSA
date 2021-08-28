 
// limit for array size
const int N = 100000;
 
int n; // array size
 
// Max size of tree
int tree[2 * N];
 
// function to build the tree
void build( int arr[])
{
    // insert leaf nodes in tree
    for (int i=0; i<n; i++)   
        tree[n+i] = arr[i];
     
    // build the tree by calculating parents
    for (int i = n - 1; i > 0; --i)    
        tree[i] = tree[i<<1] + tree[i<<1 | 1];   
}
 
void updateTreeNode(int p, int value)
{
    tree[p+n] = value;
    p = p+n;
     
    for (int i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] + tree[i^1];
}
 
int query(int l, int r)
{
    int res = 0;
     
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += tree[l++];
     
        if (r&1)
            res += tree[--r];
    }
     
    return res;
}
 
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
 
    n = sizeof(a)/sizeof(a[0]);
     
    build(a);
     
    cout << query(1, 3)<<endl;
     
    updateTreeNode(2, 1);
     
    cout << query(1, 3)<<endl;
 
    return 0;
}