// Disjoint Sets


// Data Structures used:
// Array : An array of integers, called parent[]. If we are dealing with n items, i’th element of the array represents 
//the i’th item. More precisely, the i’th element of the array is the parent of the i’th item. These relationships create one, or more, virtual trees.

// Tree : It is a disjoint set. If two elements are in the same tree, then they are in the same disjoint set. 


// Finds the representative of the set  
// that i is an element of

// Method 1

int find(int i) 
{
    // If i is the parent of itself
    if (parent[i] == i) 
    {
        // Then i is the representative of 
        // this set
        return i;
    }
    else 
    {
        // Else if i is not the parent of 
        // itself, then i is not the 
        // representative of his set. So we 
        // recursively call Find on its parent
        return find(parent[i]);
    }
}

// Method 2


function MakeSet(x)
    x.parent = x
 
function Find(x)
    if x.parent == x
        return x
    else
        return Find(x.parent)
 
function Union(x, y)
    xRoot = Find(x)
    yRoot = Find(y)
    xRoot.parent = yRoot