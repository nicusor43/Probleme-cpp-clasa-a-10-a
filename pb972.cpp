//what they like to call overengineering

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a, vocale = "aeiou";
    bool vocala = false, consoana1 = false, consoana2 = false;
    int nr = 0;

    getline(cin, a);
    for (int i = 1; i < a.length() - 1; i++)
    {
        vocala = false, consoana1 = true, consoana2 = true;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == vocale[j])
            {
                vocala = true;
                break;
            }
        }
        if (vocala)
        {
            for (int j = 0; j < 5; j++)
            {
                if (a[i - 1] == vocale[j] && !(a[i - 1] < 'a' || a[i - 1] > 'z'))
                {
                    consoana1 = false;
                    break;
                }
            }

            if (consoana1)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (a[i + 1] == vocale[j] && !(a[i + 1] < 'a' || a[i + 1] > 'z'))
                    {
                        consoana2 = false;
                        break;
                    }
                }
                if (consoana2)
                    nr++;
            }
        }
    }

    cout << nr;
}
