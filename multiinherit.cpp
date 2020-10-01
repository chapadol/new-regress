using namespace std;
#include<iostream>
class Shape
{
public:
void getWidth(int w)
{
width = w;
}
void getLength(int l)
{
length = l;
}
protected:
int width;
int length;
};
class Cost
{
public:
int getCost(int area)
{
return area*45;
}
};
class Rectangle: public Shape, public Cost
{
public:
int getArea()
{
return(width*length);
}
};
int main()
{
Rectangle Rect;
int area,w,l;
cout<<"Enter the width and length: ";
cin>>w>>l;
Rect.getWidth(w);
Rect.getLength(l);
area = Rect.getArea();
cout<<"Total area = "<<Rect.getArea()<<endl;
cout<<"Total Paint cost = Rs. "<<Rect.getCost(area)<<endl;
return 0;
}