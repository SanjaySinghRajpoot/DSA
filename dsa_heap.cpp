#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
}

void hepify(vector<int> &hT, int i){
   
   int size = hT.size();
   int largest = i;
   int l = 2 * i + 1;   // an algo
   int r = 2 * i + 2;

   if(l < size && hT[l] > hT[largest]){
      largest = l;
   }

   if(r < size && hT[r] > hT[largest]){
      largest = r;
   }

   if(largest != i){
     swap(&hT[i], &hT[largest]);
     hepify(hT,largest);
   }
}

void insert(vector<int> &hT, int newNum){
   
   int size = hT.size();

   if(size == 0){
   	hT.push_back(newNum);
   }

   else{
   	hT.push_back(newNum);

   	for(int i = size / 2 - 1; i >=0; i--){
         hepify(hT, i);
   	}
   }
}

void printArray(vector<int> &hT){
    
    for(int i=0; i< hT.size(); ++i)
    {
         cout<<hT[i]<<" ";
         cout<<"\n";
    }
}

int main(){
   vector<int> heapTree;

   insert(heapTree, 3);
   insert(heapTree, 4);
   insert(heapTree, 9);
   insert(heapTree, 5);
   insert(heapTree, 2);
   
   cout<<" Max-heap array: "<<endl;
   printArray(heapTree);

	return 0;
}