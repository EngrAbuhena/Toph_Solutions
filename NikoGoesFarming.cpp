// Niko Goes Farming
// Accepted
// Author @ Abuhena Rony
#include <iostream>
using namespace std;

int main()
{
    int lands;
    int perimeter;
    int temp;

    cin >> lands; // taking input for lands

    for (int x = 1; x <= lands; x++)
    {
        cin >> perimeter; // taking perimeter input for every lands
        if (perimeter % 4 == 0)
        {
            temp = perimeter / 4;
            cout << temp * temp << endl;
        }
        else
        {
            temp = perimeter;
        }
    }
    return 0;
}