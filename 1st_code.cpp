#include<iostream>
using namespace std;
class rbi{
    public:
    virtual void getinfo()=0;
    virtual bool paymentValidation()=0;
};
class sbi:public rbi{
    public:
    int id;
    int balance;
    int originalBalance;
    sbi(int x,int y){
        id=x;
        balance=y;
        originalBalance=balance;
    }
    void getinfo(){
        cout<<this->id<<" ";
        cout<<this->balance<<" ";
    }
    
    bool paymentValidation(){
        if(balance !=originalBalance){
            return 1;
        }
        return 0;
    }
    void addMoney(int x){
        originalBalance=balance;
        balance+=x;
    }
    void withdrawMoney(int y){
        originalBalance=balance;
        balance-=y;
    }
    
};
int main(){
    rbi *r=new sbi(1,1000);
    r->getinfo();
    return 0;
}
