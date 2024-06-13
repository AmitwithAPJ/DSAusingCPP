#include <iostream>
using namespace std;

#define PI 3.14157  //defining macros and putting value without "="
float area_circle(float radius) //function!!
{
    return PI*radius*radius;//
}
float circum_circle(float radius)
{
    return 2*PI*radius;
}
int main()
{
    float result=area_circle(3.5);
    cout << "The Area is: " << result << endl;
    float result2=circum_circle(2.5);
    cout << "The Circumference is: " << result2 << endl;




    return 0;
}
//or

#include <iostream>
using namespace std;
#define PI 3.1415
class Circle
{
    private:
     const double radius;
    public:
     Circle(double _radius): radius(_radius)
     {
     }
    double area()
    {
        return PI*radius*radius;
    } 
    double circum()
    {
        return 2*PI*radius;
    }
};
int main()
{
    Circle C1(3.5);
    cout << C1.area() << endl;
    cout << C1.circum() << endl;





    return 0;
}
