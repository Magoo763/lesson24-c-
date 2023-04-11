#include <stdio.h>
#include <iostream>


using namespace std;

const double pi=3.14;
void initMenu();

void MenuDecision(int);

double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);

int main (){
char cont;
int choice;

do
{
system("cls");
initMenu();

cin>>choice;

MenuDecision(choice);

    do 
    {
        
    cout<<"Do you want to continue program? Y or N"<<endl;
    //buffer-temporary array for character array, c++
    //checks char variable one at a time, thus going through loop,
    //buffer must be clear in order to go through.
    cin>>cont;
    //cin.ignore()ignores other characters
    } while (cont!= 'y' && cont!= 'Y' && cont!= 'N' && cont!= 'n');

} while (cont== 'y' || cont== 'Y');




return 0;
}

void initMenu()
{
cout<<"Enter option"<<endl;
cout<<"1. Circle"<<endl;
cout<<"2. Square"<<endl;
cout<<"3. Rectangle"<<endl;
cout<<"4. Triangle"<<endl;
}


void MenuDecision(int choice)
{
double r, a, b, h;
switch(choice)
{
    case 1:
        cout<<"Enter the radis"<<endl;
        cin>>r;
        areaCircle(r);
        break;
    case 2:
        cout<<"Enter the side of a square: "<<endl;
        cin>>a;
        areaSquare(a);
        break;
    case 3:
        cout<<"Enter the width and height of a rectangle"<<endl;
        cin>>a>>b;
        areaRectangle(a, b);
        break;
    case 4:
        cout<<"Enter the base and height of triangle"<<endl;
        cin>>a>>h;
        areaTriangle(a, h);
        break;
    default:
        cout<<"You didn't choose any option"<<endl;
}

}

double areaCircle(double r)
{
    double result=pi * r * r;
    cout<<"Area of a circle that radius is: "<<r<<" = "<<result<<endl;
    return result;


}

double areaSquare(double a)
{
    double result = a * a;
    cout<<"The area of a square that side is "<<a<< " = "<<result<<endl;
    return result;

}

double areaRectangle(double a, double b)
{
    double result = a * b;
        cout<<"The area of a rectanlgle that first side is "<<a<<"The second side is"<<b<<" = "<<result<<endl;
        return result;
}

double areaTriangle(double a, double h)
{
    double result= (1/2.0) * a * h;
    cout<<"The area of a rectangle that first side is"<<a<<" The second side is "<<h<<" = "<<result<<endl;
    return result;

}