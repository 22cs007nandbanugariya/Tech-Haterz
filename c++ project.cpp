#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //variables 
    int choise;
    float PI =3.14159265358979323846;
    float x,y,result;
    long factorial = 1;
    
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tSCIENTIFIC CALCULATOR"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    
    //List Of function
    cout<<"1.Addition";
    cout<<"\t\t\t 2.Subtraction"<<endl;
    cout<<"3.Multiplication";
    cout<<"\t\t 4.Division"<<endl;
    cout<<"5.Square";
    cout<<"\t \t \t 6.Square root"<<endl;
    cout<<"7.cube";
    cout<<"\t\t\t\t 8.cube root"<<endl;
    cout<<"9.Power ";
    cout<<"\t\t\t 10.Natural Logarithm"<<endl;
    cout<<"11.Logarithm(base 10)";
    cout<<"\t\t 12.Exponential"<<endl;
    cout<<"13.Sine function";
    cout<<"\t\t 14.Cosine function"<<endl;
    cout<<"15.Tan function";
    cout<<"\t\t\t 16.Inverse of Sin"<<endl;
    cout<<"17.Inverse of Cos";
    cout<<"\t\t 18.Inverse of Tan"<<endl;
    cout<<"19.Hyperbolic sine";
    cout<<"\t\t 20.Hyperbolic cosine"<<endl;
    cout<<"21.Hyperbolic tangent";
    cout<<"\t\t 22.Degree to Radians"<<endl;
    cout<<"23.Radians to Degree";
    cout<<"\t\t 24.Factorial"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Enter the function that you want to perform :";
    cin>>choise;
    switch(choise)
    {
    case 1: //Addition
        
        cout<<"Enter a first number  :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result= x+y;
        cout<<"Addition of two number = "<<result;
        break;

    case 2: //Substraction
            
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x-y;
        cout<<"Subtraction of two number = "<< result;
        break;

    case 3: //Multiplication
            
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x*y;
        cout<<"multiplication of two number = "<<result;
        break;

    case 4: //Division
            
        cout<<"Enter a first number :";
        cin>>x;
        cout<<"Enter a second number :";
        cin>>y;
        result = x/y;
        cout<<"Division of two number = "<<result;
        break;

    case 5: //Square
            
        cout<<"Enter a number :";
        cin>>x;
        result = x*x;
        cout<<"Square of a number = "<<result;
        break;

    case 6: //Square root
            
        cout<<"Enter a number :";
        cin>>x;
        result = sqrt(x);
        cout<<"Square root of this number = "<<result;
        break;

    case 7: //Cube
            
        cout<<"Enter a number :";
        cin>>x;
        result = x*x*x;
        cout<<"Cube of this number = "<<result;
        break;

   case 8: //Cube root 
            
        cout<<"Enter a number :";
        cin>>x;
        result = cbrt(x);
        cout<<"Cube root = "<<result;
        break;

   case 9: //Power
            
        cout<<"Enter base number :";
        cin>>x;
        cout<<"Enter the power:";
        cin>>y;
        result = pow(x,y);
        cout<<"Result = "<<result;
        break;

   case 10: //Natural Logarithm
            
        cout<<"Enter a number :";
        cin>>x;
        result = log(x);
        cout<<"log("<<x<<") = "<<result;
        break;

   case 11: // Logarithm(base 10)
            
        cout<<"Enter a number :";
        cin>>x;
        result = log10(x);
        cout<<"log10("<<x<<") = "<<result;
        break;

   case 12: //Exponential
            
        cout<<"Enter a number :";
        cin>>x;
        result = exp(x);
        cout<<"Exponential of "<<x<<"= "<<result;
        break;

   case 13: //Sine function
            
        cout<<"Enter a number :";
        cin>>x;
        result = sin(x);
        cout<<"sin("<<x<<") = "<<result;
        break;

   case 14: //Cosine function
            
        cout<<"Enter a number :";
        cin>>x;
        result = cos(x);
        cout<<"cos("<<x<<") = "<<result;
        break;

   case 15: //Tan function
            
        cout<<"Enter a number :";
        cin>>x;
        result = tan(x);
        cout<<"tan("<<x<<") = "<<result;
        break;

   case 16: //Inverse of sine
            
        cout<<"Enter a number :";
        cin>>x;
        result = asin(x)*180.0/PI;
        cout<<"Inverse sine of "<<x<<"(in degree) = "<<result;
        break;

   case 17: //Inverse of cosine
            
        cout<<"Enter a number :";    
        cin>>x;
        result = acos(x)*180.0/PI;
        cout<<"Inverse cosine of "<<x<<"(in degree) = "<<result;
        break;

   case 18: //Inverse of tan
            
        cout<<"Enter a number :";
        cin>>x;
        result = atan(x)*180.0/PI;
        cout<<"Inverse tangent of "<<x<<"(in degree) = "<<result;
        break;

   case 19: //Hyperbolic sine
            
        cout<<"Enter a number :";
        cin>>x;
        result = sinh(x);
        cout<<"sinh("<<x<<") = "<<result;
        break;

   case 20: //Hyperbolic cosine
            
        cout<<"Enter a number :";
        cin>>x;
        result = cosh(x);
        cout<<"cosh("<<x<<") = "<<result;
        break;

   case 21: //Hyperbolic tan
            
        cout<<"Enter a number :";
        cin>>x;
        result = tanh(x);
        cout<<"tanh("<<x<<") = "<<result;
        break;

   case 22: //Degree to radians
            
        cout<<"Enter the angle in Degrees :";    
        cin>>x;
        result = x*PI/180;
        cout<<"The angle in Radian = "<<result;
        break;

   case 23: //radians to degree
            
        cout<<"Enter the angle in Radians :";    
        cin>>x;
        result = x*180/PI;
        cout<<"The angel in Degree = "<<result;
        break;

   case 24: //Factorial
            
        cout << "Enter a positive integer: ";
        cin >> x;

        if (x < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
        else 
         {
            for(int i = 1; i <= x; ++i)
              {
                factorial *= i;
              }
            cout << "Factorial of " << x << " = " << factorial;    
         }

     }
     cout<<endl<<"-------------------------------THANK YOU-------------------------------";
}
