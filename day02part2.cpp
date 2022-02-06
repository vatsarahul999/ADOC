#include<bits/stdc++.h>

using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif
    int cnt = 0;
    int n, pre = -1;
    std::string dir;
    std::string forward = "forward";
    std::string down = "down";
    std::string up = "up";
    int xDir = 0,yDir = 0,aim = 0;
    for (int i = 0; i < 1000; ++i)
    {
        std::cin >> dir >> n;
        if(forward == dir ) {
            xDir+=n;
            yDir+=(aim*n);
        } else if(down == dir){
            aim+=n;
        } else if(up == dir){
            aim-=n;
        } else {
            xDir-=n;
        }
    }
    std::cout << xDir*yDir << std::endl;
    
}