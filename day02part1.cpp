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
    int xDir = 0,yDir = 0;
    for (int i = 0; i < 1000; ++i)
    {
        std::cin >> dir >> n;
        if(forward == dir ){
            xDir+=n;
        } else if(down == dir){
            yDir+=n;
        } else if(up == dir){
            yDir-=n;
        } else {
            xDir-=n;
        }
        cout << dir << " " << xDir << " "<<yDir<<endl;
    }
    int result = xDir*yDir;
    std::cout << xDir*yDir << std::endl;
    
}