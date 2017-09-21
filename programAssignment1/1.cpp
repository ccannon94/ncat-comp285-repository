#include <iostream>
#include <string>

using namespace std;

//declare functions here because c++
bool gcdIsOne(int a, int b);

int main(int argc, char *argv[])
{
  int dimension;

  if(argc >= 2)
    if ( !(dimension = std::stoi(argv[1], nullptr, 10)) )//give the value to dimension using the characters in the string
      dimension = 0;//if that fails set Result to 0

  bool gcd[dimension][dimension];

  for(int i = 0; i < dimension; i++)
  {
    for(int j = 0; j < dimension; j++)
    {

    }
  }

  std::cout << gcdIsOne(1, 1) << std::endl;
}

bool gcdIsOne(int a, int b)
{
    return true;
}
