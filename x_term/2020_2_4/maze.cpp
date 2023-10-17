#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Grid {
    bool bValid;
    bool bStart;
    bool bDest;
    int x;
    int y;

public:
    bool isValid() const { return bValid; }
    bool isStart() const { return bStart; }
    bool isDest() const { return bDest; }
    void setValid(bool val) { bValid = val; }
    void setStart(bool val) { bStart = val; }
    void setDest(bool val) { bDest = val; }
    void setX(int val) { x = val; }
    void setY(int val) { y = val; }
    int getx() { return x; }
    int gety() { return y; }
};

class Maze {
    vector<vector<Grid>> maze;

public:
    // Constructor to initialize the maze
    Maze() {
        // Initialize the maze grid
        for (int i = 0; i < 5; i++) {
            vector<Grid> row;
            for (int j = 0; j < 5; j++) {
                Grid grid;
                grid.setValid(true);
                grid.setStart(false);
                grid.setDest(false);
                grid.setX(i);
                grid.setY(j);
                row.push_back(grid);
            }
            maze.push_back(row);
        }

        // Randomly place obstacles (X) in the middle rows
        srand(static_cast<unsigned>(time(nullptr)));
        for (int i = 1; i < 4; i++) {
            int randCol = rand() % 5;
            maze[i][randCol].setValid(false);
        }

        // Set the start (S) and destination (D) points
        maze[0][0].setStart(true);
        maze[4][4].setDest(true);
    }

    // Function to show the maze
    void showMaze() {
        for (const vector<Grid>& row : maze) {
            for (const Grid& grid : row) {
                if (grid.isStart()) {
                    cout << "S";
                } else if (grid.isDest()) {
                    cout << "D";
                } else if (!grid.isValid()) {
                    cout << "X";
                } else {
                    cout << "O";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Maze maze;
    maze.showMaze();
    return 0;
}
