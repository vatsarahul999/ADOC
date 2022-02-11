#include<bits/stdc++.h>

using namespace std;

class MyNumber {
private:
    char *word;
    int words[12];
public:
    MyNumber(char *p){
        word = p;
        for (int i = 0; i < 12; ++i)
        {
            words[i] = word[i] == '0' ? 0 : 1;
        }
    }
    
    MyNumber(const MyNumber &num){
        MyNumber(num.word);
    }
    
    char * getWord(){
        return word;
    }

    int getIntAt(int idx){
        if(idx > 11 || idx < 0)
            return -1;
        return words[idx];
    }

    void printData(){
        cout<< word << " Int : " ;
        for (int i : words)
            cout<<i<< " ";
        cout<< endl;
    }
};

int * getCts(vector<MyNumber *> &input, int idx){
    int * result = new int[2];
    result[0] = 0;
    result[1] = 0;
    for(auto *n : input){
        if(n->getIntAt(idx) == 1){
            result[1]++;
        } else {
            result[0]++;
        }
    }
    return result;

}
void removeElementsInVector(vector<MyNumber *> &input, bool useMax) {
    int idx = 0;
    int max = 0;
    while(input.size() != 1 && idx < 12 ){
        int *counter = getCts(input, idx);
        max = counter[0] >counter[1] ? 0 : 1; 
        input.erase(std::remove_if( input.begin(), input.end(), [idx, max, useMax](MyNumber *num ) {
            return useMax ? num->getIntAt(idx) == max : num->getIntAt(idx) != max;
        }), input.end());
        idx++;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif
    char word[12];
    int co2Num = 0,o2Num = 0;
    vector<MyNumber *> input;
    //cout << "Final O2 "<< endl;
    for (int i = 0; i < 1000; ++i)
    {
        std::cin >> word;
        MyNumber *num = new MyNumber(word);
        input.push_back(num);
    }
    vector<MyNumber *> o2(input);
    vector<MyNumber *> co2(input);
    // o2  check
    removeElementsInVector(o2, true);
    o2[0]->printData();
    removeElementsInVector(co2, false);
    //co2 check
    co2[0]->printData();
    for(int i = 0 ; i < 12; i++) 
    {
        o2Num = o2Num*2 +o2[0]->getIntAt(i);
    }
    
    for(int i = 0 ; i < 12; i++) 
    {
        co2Num = co2Num*2 +co2[0]->getIntAt(i);
    }
    cout << "result :: " << o2Num*co2Num << endl;
    return 0;
}