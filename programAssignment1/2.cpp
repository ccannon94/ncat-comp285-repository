#include <iostream>
#include <string>

using namespace std;

int josephi(int n, int m, int p, int *players);
int winningPlayer(int *players, int n);
int activePlayer, turnNumber;

int main(int argc, char *argv[])
{
  if(!(argc == 4))
  {
    std::cout<<"Incorrect parameters given for Josephus problem"<<std::endl;
    exit(0);
  }

  int n = std::atoi(argv[1]);
  int m = std::atoi(argv[2]);
  int p = std::atoi(argv[3]);

  int players[n];

  for(int i = 0; i < n; i ++)
  {
    players[i] = i+1;
  }

  activePlayer = 0;
  turnNumber = 1;

  int winner = josephi(n, m, p, players);
}

int josephi(int n, int m, int p, int *players)
{

  if(n == 1)
    return winningPlayer(players, n);


}

int winningPlayer(int *players, int n)
{
  int winner = 0;

  for(int i = 0; i < n; i++)
  {
    winner = winner + players[i];
  }

  return winner;
}
