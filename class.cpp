#include <iostream>
using namespace std;

class car{
    public:
    string name;
    int price;
    int seats;
    int model_year;

};

int main (){
car c1;
c1.name="toyota";
c1.price=240000;
c1.seats=5;
c1.model_year=2025;

car c2;
c2.name="toyota";
c2.price=240000;
c2.seats=5;
c2.model_year=2025;

cout<<c1.name<<" \n"<<c1.price<<" "<<c1.seats<<" "<<c1.model_year<<endl;

}


