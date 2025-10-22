#include <iostream>
#include <vector>
#include<list>
using namespace std;

int main() {
    // vector<pair<int, int>> vec = {{1,2}, {3,4}, {5,6}};
    // for(auto p : vec){
    //     cout << p.first << " " << p.second << endl;
    // }


    list<int>l = {1,2,3};
    l.push_front(0);
    l.insert(l.begin(), 5);
    l.push_back(3);
    l.pop_front();
    l.pop_back();
    
    for(auto vec : l){
        cout<<vec;
    }
}
