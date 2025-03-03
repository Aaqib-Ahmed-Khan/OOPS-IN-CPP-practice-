#include <iostream>
using namespace std;

class car{
    public:
    string name;
    int price;
    int seats;
    int model_year;

};

void print(car c){
cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.model_year<<endl;
};
int main (){
car c1;
c1.name="toyota";
c1.price=240000;
c1.seats=5;
c1.model_year=2025;

car c2;
c2.name="honda";
c2.price=210000;
c2.seats=7;
c2.model_year=2026;

print(c1);
print(c2);
}


