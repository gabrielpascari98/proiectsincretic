#include <iostream>

using namespace std;
int n;
void Discompune()
{
    int d = 2,
        p;

    while(n > 1)
    {

        p = 0;
        while(n % d == 0)
        {
            ++p;
            n /= d;
        }

        if(p)
            cout << d << " " << p << endl;
        ++ d;


        if(n>1 && d * d > n){
            d = n;
        }
    }
}

int main()
{
    cout<<"Acest program va descompune numarul dat de dumneavoatra in factori primi.  "<< endl;
    cout << "Da-ti numarul:" << endl;
    cin >> n;
    Discompune();

    return 0;
}
