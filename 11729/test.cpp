#include <iostream>
#include <list>
using namespace std;

struct Move
{
    int from;
    int to;
};

class MoveList
{
    list<struct Move> moveList;

public:
    void makeMove(int from, int to)
    {
        struct Move move = {from, to};
        moveList.push_back(move);
    }

    list<struct Move> getList()
    {
        return moveList;
    }
};

void solveHanoi(struct MoveList *moves, int from, int through, int to, int size)
{
    if (size == 1)
    {
        moves->makeMove(from, to);
        return;
    }

    // else
    solveHanoi(moves, from, to, through, size - 1);
    moves->makeMove(from, to);
    solveHanoi(moves, through, from, to, size - 1);
}

int main()
{
    int n;
    cin >> n;

    struct MoveList moves;
    solveHanoi(&moves, 1, 2, 3, n);

    list<Move> moveList = moves.getList();

    cout << moveList.size() << '\n';

    list<Move>::iterator it = moveList.begin();
    for (; it != moveList.end(); it++)
        cout << it->from << ' ' << it->to << '\n';

    return 0;
}