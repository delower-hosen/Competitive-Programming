#include<bits/stdc++.h>
using namespace std;

// A Function to calculate Mex of all the values in
// that set.
int calculateMex(unordered_set<int> Set)
{
    int Mex = 0;

    while (Set.find(Mex) != Set.end())
        Mex++;

    return (Mex);
}

// A function to Compute Grundy Number of 'n'
// Only this function varies according to the game
int calculateGrundy(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    if (n == 2)
        return (2);
    if (n == 3)
        return (3);

    unordered_set<int> Set; // A Hash Table

    for (int i=1; i<=3; i++)
            Set.insert(calculateGrundy(n - i));

    return (calculateMex(Set));
}

// Driver program to test above functions
int main()
{
    int n =5;
    printf("%d\n", calculateGrundy(n));
    return (0);
}
