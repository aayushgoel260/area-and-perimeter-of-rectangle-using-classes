#include<iostream>
using namespace std;
class rectangle{
    private:
    int l;
    int b;
    int area;
    int perimeter;
    public:
    void input();
    void display();
    void calc();
    
};
void rectangle :: input(){
    cout<<"Enter length";
    cin>>l;
    cout<<"Enter breadth";
    cin>>b;

}
void rectangle :: display(){
    cout<<area<<endl;
    cout<<perimeter<<endl;
}
void rectangle :: calc(){
    area=l*b;
    perimeter=2*(l+b);
}
int main(){
    rectangle a;
    a.input();
    a.calc();
    a.display();
}