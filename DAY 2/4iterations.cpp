//Code with the least number of iterations
#include <iostream>
using namespace std;
int main()
{
    int LCM = 60;
    int NumTerms = 4;
    int x=1;
    int multiple = 301;
    int count = 1;
    int iterations = 0;

    while (count <= NumTerms)
    {
        if (multiple % 7 == 0)
        {
            if (count != 3)
                cout << multiple << ", ";
            ++count;
        }
        /* multiple=multiple+420*x;
         ++x;*/
        multiple += LCM * 7;

        ++iterations;
    }

    cout << "\n#Iterations : " << iterations << endl;
    return 0;
}
