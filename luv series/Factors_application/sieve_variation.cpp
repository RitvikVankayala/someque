#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lowestPrime(N, 0), highestPrime(N);
vector<int> divisors[N];

int main()
{
    isPrime[0] = isPrime[1] = false;
    // for (int i = 2; i < N; i++)
    // {
    //     if (isPrime[i] == true)
    //     {
    //         lowestPrime[i] = highestPrime[i] = i;

    //         for (int j = 2 * i; j < N; j += i)
    //         {
    //             isPrime[j] = false;
    //             highestPrime[j] = i;
    //             if (lowestPrime[j] == 0)
    //             {
    //                 lowestPrime[j] = i;
    //             }
    //         }
    //     }
    // }
    // for (int i = 1; i <= 20; i++)
    // {
    //     cout << i << " == " << lowestPrime[i] << " " << highestPrime[i] << endl;
    // }

    // int num;
    // cin >> num;
    // // vector<int> PrimeFactors;
    // map<int, int> PrimeFactors;
    // while (num > 1)
    // {
    //     int prime_factors = highestPrime[num];
    //     while (num % prime_factors == 0)
    //     {
    //         num /= prime_factors;
    //         PrimeFactors[prime_factors]++;
    //     }
    // }
    // for (auto it : PrimeFactors)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    for (int i = 2; i < N; i++)
    {

        for (int j = i; j < N; j += i)
        {
            divisors[j].push_back(i);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int it : divisors[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}