#include <bits/stdc++.h>

using namespace std;

char puzzle[10][10];

int main(){
    int kase = 0;
     //读取图的第一行以及末尾换行符 一共6字符
    while (fgets(puzzle[0], 7, stdin)){
        if (puzzle[0][0] == 'Z') break;
        for (int i = 1; i < 5; i++){ 
            fgets(puzzle[i], 7, stdin);
        }
        int ei = 0, ej = 0;
        for (int i = 0; i < 5; i++){
            for (int j  = 0; j < 5; j++){
                if (puzzle[i][j] == ' '){
                ei = i;
                ej = j;
                break;
                }
            }
        }
        bool valid = true;
        char moves[101];
        int cnt = 0;
        char c;
        while (scanf("%c", &c) == 1 && c != '0'){
            moves[cnt++] = c;
        }
        int ni = ei, nj = ej;
        for (int i = 0; i < cnt; i++){
            switch(moves[i])
            {
                case 'A': ni = ei-1; nj = ej; break;
                case 'B': ni = ei+1; nj = ej; break;
                case 'L': nj = ej-1; ni = ei; break;
                case 'R': nj = ej+1; ni = ei; break;
                default: break;
            }

            if (ni < 0 || nj < 0 || ni > 4 || nj > 4){
                valid = false;
                break;
            }else{
                swap(puzzle[ei][ej], puzzle[ni][nj]);
                ei = ni;
                ej = nj; 
            }
        }
        getchar();
        if (kase++) cout << endl;
        cout << "Puzzle #" << kase << ":\n"; 
        if (valid == false)
            cout << "This puzzle has no final configuration." << endl;
        else {
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    if (j) cout << ' ';
                    cout << puzzle[i][j];
                }
            cout << endl;
        }
    }
    }
    return 0;
}