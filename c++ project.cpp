#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choise;
    float PI =3.14159265358979323846;
    float x,y;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"                   SCIENTIFIC CALCULATOR"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"1.Addition";
    cout<<"\t\t\t 2.Subtraction"<<endl;
    cout<<"3.Multiplication";
    cout<<"\t\t\t 4.Division"<<endl;
    cout<<"5.Square";
    cout<<"\t \t \t 6.Square root"<<endl;
    cout<<"7.cube"<<endl;
    cout<<"8.cuberoot";
    cout<<"9.Power ";
    cout<<"\t\t\t 10.Natural Logarithm"<<endl;
    cout<<"11.Logarithm(base 10)"<<endl;
    cout<<"12.Exponential";
    cout<<"\t\t\t 13.Sine function"<<endl;
    cout<<"14.Cosine function";
    cout<<"\t\t\t 15.Tan function"<<endl;
    cout<<"16.Inverse of Sin";
    cout<<"\t\t 17.Inverse of Cos"<<endl;
    cout<<"18.Inverse of Tan"<<endl;
    cout<<"19.Hyperbolic sine"<<endl;
    cout<<"20.Hyperbolic cosine"<<endl;
    cout<<"21.Hyperbolic tangent";
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Enter the function that you want to perform :";
    cin>>choise;
    switch(choise)
    {
    case 1:
        float result;
        cout<<"Enter a first number  :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result= x+y;
        cout<<"Addition of two number is :"<<result;
        break;

    case 2:
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x-y;
        cout<<"Subtraction of two number is :"<< result;
        break;

    case 3:
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x*y;
        cout<<"multiplication of two number is :"<<result;
        break;

    case 4:
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x/y;
        cout<<"Division of two number is :"<<result;
        break;

    case 5:
        cout<<"Enter a number :";
        cin>>x;
        result = x*x;
        cout<<"Square of a number is :"<<result;
        break;

    case 6:
        cout<<"Enter a number :";
        cin>>x;
        result = sqrt(x);
        cout<<"Square root of this number is:"<<result;
        break;

     case 7:
        cout<<"Enter a number :";
        cin>>x;
        result = x*x*x;
        cout<<"Result = "<<result;
        break;

     case 8:
        cout<<"Enter a number :";
        cin>>x;
        result = cbrt(x);
        cout<<"Cube root is:"<<result;
        break;

   case 7:
        cout<<"Enter a number :";
        cin>>x;
        cout<<"Enter the power:";
        cin>>y;
        result = pow(x,y);
        cout<<x<<" "<<"power of"<<" "<< y <<" is :"<<result;
        break;

   case 8:
        cout<<"Enter a number :";
        cin>>x;
        result = log(x);
        cout<<"log"<<" "<<x<<"is :"<<result;
        break;

     case 8:
        cout<<"Enter a number :";
        cin>>x;
        result = log10(x);
        cout<<"log10"<<" "<<x<<"is :"<<result;
        break;

   case 9:
        cout<<"Enter a number :";
        cin>>x;
        result = exp(x);
        cout<<"Exponential of a "<<x<<"is : "<<result;
        break;

   case 10:
        cout<<"Enter a number :";
        cin>>x;
        result = sin(x);
        cout<<"sin function of "<<x<<"is :"<<result;
        break;

   case 11:
        cout<<"Enter a number :";
        cin>>x;
        result = cos(x);
        cout<<"cos function of "<<x<<"is :"<<result;
        break;

   case 12:
        cout<<"Enter a number :";
        cin>>x;
        result = tan(x);
        cout<<"tan function of "<<x<<"is :"<<result;
        break;

   case 13:
        cout<<"Enter a number :";
        cin>>x;
        result = sin(x)*180.0/PI;
        cout<<"Inverse sine of  "<<x<<"is :"<<result;
        break;

   case 14:
        cout<<"Enter a number :";    //implicit jovanu che
        cin>>x;
        result = cos(x)*180.0/PI;
        cout<<"Inverse cosine of "<<x<<"is :"<<result;
        break;

     case 15:
        cout<<"Enter a number :";
        cin>>x;
        result = tan(x)*180.0/PI;
        cout<<"Inverse tangent of "<<x<<"is :"<<result;
        break;

     case 10:
        cout<<"Enter a number :";
        cin>>x;
        result = sinh(x);
        cout<<"Hyperbolic "<<x<<"is :"<<result;
        break;

     case 10:
        cout<<"Enter a number :";
        cin>>x;
        result = cosh(x);
        cout<<"Hyperbolic "<<x<<"is :"<<result;
        break;

     case 10:
        cout<<"Enter a number :";
        cin>>x;
        result = tanh(x);
        cout<<"Hyperbolic "<<x<<"is :"<<result;
        break;


     
    }

}
