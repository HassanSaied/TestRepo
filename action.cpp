#include <iostream>
using namespace std;
#include"action.h"

void action::do_magic()
{
    cout <<"Congrats adventurer! You have been BLESSED"<<endl;
}

int action::get_random_int(){
    return 42;
}

bool action::is_number_magical(int x){
    return (!(x%3)) && (!(x%7));
}

void action::do_black_magic(){
    cout<<"You have been CURSED"<<endl;
}
void action::hello_world(){
    cout<<"Hello World!"<<endl;
}
