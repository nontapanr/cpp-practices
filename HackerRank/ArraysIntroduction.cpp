#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int arr[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d ",&arr[i]);
    }
    for(int i=n;i>0;--i)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
