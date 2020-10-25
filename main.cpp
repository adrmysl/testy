#include <iostream>

using namespace std;

//Fibonacci

long double ciag[30000],dzielenie;
int main()
{
    ciag[0]=ciag[1]=1;
    cout.precision(30);
    for (int i=0;i<30000;i++)        //1300 ok
    {
        ciag[i+2]=ciag[i+1]+ciag[i];

        dzielenie=ciag[i+1]/ciag[i];
  //    cout<<i+1<<". " << ciag[i]<<"\t\tdzielenie: "<<dzielenie<<endl;


    }


    return 0;
}
