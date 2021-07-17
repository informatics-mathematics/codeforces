#include<iostream>
using namespace std;

int main() 
{
    int T; cin >> T;

    while(T--)
    {
        int H, W; 
        cin >> H >> W;

        int board[H][W] = {};

        // go top-left to top-right
        for(int i = 0; i<= W-1; i += 2) board[0][i] = 1;

        // go top-right to bottom-right
        for(int i = 2; i<= H-1; i += 2) board[i][W-1] = 1;

        // go bottom-right to bottom-left
        for(int i = W-3; i>=0; i -= 2) board[H-1][i] = 1;

        // go bottom-left to top-left
        for(int i = H-3; i>1; i -= 2) board[i][0] = 1;

        for (int i = 0; i < H; i++) 
        {
            for (int j = 0; j < W; j++)
                cout << board[i][j];

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}
