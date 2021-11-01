#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> dq;
    int i=0;
    while (dq.size() < k){
        dq.push_back(arr[i]);
        ++i;
    }
    int mx = max_element(dq.begin(),dq.end())[0];
    while(i < n)
    {
        //find max
        //auto m = max_element(dq.begin(),dq.end());
        printf("%d ",mx);
        int p = dq[0];
        dq.pop_front();
        dq.push_back(arr[i]);
        if(arr[i] > mx)
        {
            mx=arr[i];
        }
        else if(p==mx){
            mx = max_element(dq.begin(), dq.end())[0];
        }
        ++i;
    }
    auto m = max_element(dq.begin(),dq.end());
        printf("%d ",m[0]);
    printf("\n");
}

int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
