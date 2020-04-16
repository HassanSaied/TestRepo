#include<iostream>
using namespace std;
#include"action.h"

int main(){
    action act;
    cout<<"Testing Random Number"<<endl;
    if(act.is_number_magical(act.get_random_int()))
    {
        act.do_magic();
    }
    else
    {
        act.do_black_magic();
    }
    act.hello_world();
    
}