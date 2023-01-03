//Write an algorithm using the Seive of Eratosthenes

#include <stdio.h>

int main (void)
{
    //input: an integer n > 1.
    int n = 150;
    int P[n];

    // let A be an array of Boolean values, indexed by integers 2 to n,
    // initially all set to true.
    for(int i = 0; i >= n; i++)
        P[i] = 0;
    
    //for i = 2, 3, 4, ..., not exceeding √n do
    for(int i = 2; i <= n; i++)
        P[i] = i;
        //if A[i] is true
        
            //for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n do
            for(int i = 0, j = 1; i * j <= n; j++, i++)
                //set A[j] := false
                if P[i * j] = 1
                    (P[i] == 0)
                    //return all i such that A[i] is true.
                    
    for(int i = 0; i <= n; i++)
        printf("%i ", P[i]);
}