#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
//***************Stack****************** */
    // stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // cout<<s.top();
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // stack<int>s2;
    // s2.swap(s);
    // cout<<s.size()<<endl;
    // cout<<s2.size();


// ************Queue*****************
    // queue<int>q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }



//******************Priority Queue********************
//priority_queue<int>pq;
priority_queue<int , vector<int> , greater<int>>pq;
pq.push(10);
pq.push(20);
pq.push(30);
while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

}
