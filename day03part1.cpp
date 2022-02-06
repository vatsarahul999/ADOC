#include<bits/stdc++.h>

using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif
    int cnt = 0;
    int n, idx = -1;
    char word[12];
    int zeroCtr[12] = {0};
    int onesCtr[12] = {0};
    for (int i = 0; i < 1000; ++i)
    {
        std::cin >> word;
        for (int j = 0; j < 12; ++j)
        {
            if(word[j] == '1'){
                onesCtr[j]++;
            } else {
                zeroCtr[j]++;
            }
        }
        
    }
    int gamma = 0,eplion = 0;
    for (int j = 0; j < 12; ++j)
        {
            if(zeroCtr[j] > onesCtr[j]){
                gamma = gamma*2+0;
                eplion = eplion*2+1;
            } else {
                gamma = gamma*2+1;
                eplion = eplion*2+0;
            }
        }
        cout<<gamma*eplion<< std:: endl;
    return 0;
}