#include <iostream>
#include <vector>
using namespace std;

int rows, cols;
bool board[rows][cols];

class Point{
private:
    int x;
    int y;
public:
    void setX(int i){i = x;}
    void setY(int j){j = y;}
    int getX(){return i;}
    int getY(){return j;}
    vector <Point> NegativePoint;
    bool checkSafety(Point currentQueenPosition){
        rows = cols;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(i + j == currentQueenPosition.getX() + currentQueenPosition.getY()){         //For Diagonal checking
                    NegativePoint.push_back({currentQueenPosition.getX(), currentQueenPosition.getY()});
                    return 0;
                }
                else if(i == currentQueenPosition.getX() || j == currentQueenPosition.getY()){       //For Horizontal and Vertical checking
                    NegativePoint.push_back({currentQueenPosition.getX(), currentQueenPosition.getY()});
                    return 0;
                }
                else{return 1;}
            }
        }
    }
};



int main()
{
    int testCases;
    cin>>testCases;
    for(int i = 0; i < testCases; i++){
        cin>>rows;
    }

    return 0;
}
