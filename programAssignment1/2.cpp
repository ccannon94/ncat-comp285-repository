#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  if(!argc == 4)
  {
    std::cout<<"Incorrect parameters given for Josephus problem"<<std::endl;
    exit(0);
  }

  int n = std::atoi(argv[1]);
  int m = std::atoi(argv[2]);
  int p = std::atoi(argv[3]);
}
