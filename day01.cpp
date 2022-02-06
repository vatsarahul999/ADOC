#include<bits/stdc++.h>

using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif
    int cnt = 0;
    int n, pre = -1;
    int arr[2000];
    // part 1
    // for (int i = 0; i < 2000; ++i)
    // {
    //     std::cin >> n;
    //     if(pre != -1 && pre > n)
    //     {
    //         cnt++;
    //     }
    // }
    // part 2
    for (int i = 0; i < 2000; ++i)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i <= 1997; ++i)
    {
        n = arr[i] + arr[i+1] + arr[i+2];
        if( pre != -1 && n > pre){
            cnt++;
        }
        pre = n;
    }
    std::cout << cnt << std::endl;
    
}