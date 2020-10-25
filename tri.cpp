#include <iostream>
using namespace std;

void tri(int,int,int);

struct cat
{
    int  Input[3] = {0, 0, 0};
};


int main()
{
    cat N;
    cout << "ENTER NUMBER OF ROW : ";
    cin >>N.Input[0];
    if (N.Input[0] < 0) {
        N.Input[0] = -1 * N.Input[0];
    }
    else;
    
    cout << endl<<endl;
    tri(N.Input[0],N.Input[1] ,N.Input[2]);
    return 0;
}
void tri(int x,int i,int j)
{
    i = 1, j = 0;


    int num = 1;
    while (i <= x) {
        while (j <= i - 1) {


            cout << num << " ";


            num++;
            j++;
        }
        j = 0;
        i++;


        cout << endl;
    }
}