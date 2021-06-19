#include<iostream>
using namespace std;
int main(){
    int choose;
    cout<<"1.Hello in Hindi\n";
    cout<<"2.Hello in Spanish\n";
    cout<<"3.Hello in Arabic\n";
    cout<<"4.Hello in French\n";
    cout<<"5.Hello in Japanese\n";
    cout<<"Enter in which language you want Hello\n";
    cin>>choose;
    switch(choose){
        case 1: cout<<"Namaste";
        break;
        case 2: cout<<"Hola";
        break;
        case 3: cout<<"Marhaba";
        break;
        case 4: cout<<"Bonjour";
        break;
        case 5: cout<<"Konnichiwa";
        break;
        default : cout<<"Wrong Choice";
    }
    return 0;
}
