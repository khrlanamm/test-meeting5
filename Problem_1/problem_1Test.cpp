#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
int limit = 5;
cout<<"Input = 5"<<endl;

	int increment = 1;
    int num = 0;
	for(int i=1;i<=limit;i++)
	{
	num += increment;
	increment++;
    }
cout<<"Output = "<<num<<endl;



int expectedresults = 15;

if (expectedresults == num) {
    cout<<"test passed"<<endl;
  } else
    cout<<"test failed"<<endl;

    return 0;
}