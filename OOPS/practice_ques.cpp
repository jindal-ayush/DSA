#include <iostream>
#include<string>
using namespace std;

class User
{
    int id;
    string password;

public:
    string username;

    User(int id){
       this->id  = id;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
    int getId()
    {
        return id;
    }

};
int main()
{
    User U1(1);
    U1.setPassword("123");
      cout<<U1.getPassword()<<endl;
      cout<<U1.getId();
}