#include <iostream>
using namespace std; //good idea to always use constructor functions
class shape{
  public:
    double area;
    double volume;
};
class cube : public shape{
    public:
        double side;
    cube(double side){
        this->side=side;
        this->area=6*side*side;
        this->volume=side*side*side;
    }
};
int main(){
    cube c1(7.2);
    cout << c1.area << endl;
    cout << c1.volume << endl;
    return 0;
}
