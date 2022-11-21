#include<string>
#include<iostream>
using namespace std;
int main()
{
    string username;
    string password;
    
    cin>>username;
    cin>>password;

    if(username == "admin" && password == "admin"){
        std::cout<<"Logged in successfully";
    }
    else if(username == "user123" && password == "123456"){
        std::cout<<"Logged in succesfully";
    }
    else if(username == "bob_the_king" && password == "qweasd123"){
        std::cout<<"Logged in succesfully";
    }
    /*else if(username == username && password != password){
        std::cout<<"Failed to login";
    }*/
    else
    cout<<"Failed to Login";

return 0;


}