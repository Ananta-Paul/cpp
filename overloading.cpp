#include<iostream>
using namespace std;
class sq{
    private:
    double edge;
    public:
    void setl(){
        int l;
        cin>>l;
        edge=l;
    }
    double getarea(){
        return edge*edge;
    }
    sq operator +(const sq&b){
        sq c;
        c.edge=this->edge+b.edge;
        return c;
    }
    sq operator -(const sq&b){
        sq c;
        c.edge=this->edge-b.edge;
        return c;
    }
    sq operator *(const sq&b){
        sq c;
        c.edge=this->edge*b.edge;
        return c;
    }
    sq operator /(const sq&b){
        sq c;
        c.edge=this->edge/b.edge;
        return c;
    }
};
int main(){
    sq c1;
    sq c2;
    sq c3;
    sq c4;
    sq c5;
    sq c6;
     cout<<"Enter one edge length for first square: ";
    c1.setl();
     cout<<"Enter one edge length for second square: ";
    c2.setl();
    cout<<"\nArea of 1st square: "<<c1.getarea();
    cout<<"\nArea of 2nd square: "<<c2.getarea();
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    cout<<"\nArea of 3rd square(after addition): "<<c3.getarea();
    cout<<"\nArea of 4th square(after (-)): "<<c4.getarea();
    cout<<"\nArea of 5th square(after (*)): "<<c5.getarea();
    cout<<"\nArea of 6th square(after (/)): "<<c6.getarea();


}
