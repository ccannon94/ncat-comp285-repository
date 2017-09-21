#include <iostream>
#include <string>

using namespace std;

//declare functions here because c++
int findGcd(int a, int b);

int main(int argc, char *argv[])
{
  int dimension;

  if(argc >= 2)
    if ( !(dimension = std::atoi(argv[1], nullptr, 10)) )//give the value to dimension using the characters in the string
      dimension = 0;//if that fails set Result to 0

  bool gcd[dimension][dimension];

  for(int i = 0; i < dimension; i++)
  {
    for(int j = 0; j < dimension; j++)
    {
      if(findGcd(i,j) == 1)
        gcd[i][j] = true;
      else
        gcd[i][j] = false;

      std::cout << gcd[i][j] << " ";
    }
    std::cout << std::endl;
  }

}

int findGcd(int a, int b)
{
  if(b == 0) return a;
  return findGcd(b, a%b);
}
