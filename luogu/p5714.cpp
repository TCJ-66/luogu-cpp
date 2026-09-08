#include <iostream>
using namespace std;
int main()
{
    float weight,height,bmi;
    cin>>weight>>height;
    bmi=weight/(height*height);
    if (bmi<18.5)
    {
        cout<<"Underweight";
    }
    else if(bmi>=18.5&&bmi<24)
    {
        cout<<"Normal";
    }
    else{cout<<bmi<<endl<<"Overweight";}
    return 0;
}