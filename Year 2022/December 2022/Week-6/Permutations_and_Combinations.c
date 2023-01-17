//Week-6(Problem-2)
//Program to find (nCr) and (nPr) of the given numbers

#include<stdio.h>

int fact(int);
int Combinations(int, int, int);
int Permutations(int, int);

void main()
{
    int n, r, nfact, rfact, nmr, nmrfact, nCr, nPr;

    printf("Enter n & r values:\n");
    scanf("%d %d", &n, &r);

    nmr = n - r;

    nfact = fact(n);
    rfact = fact(r);
    nmrfact = fact(nmr);

    nCr = Combinations(nfact, nmrfact, rfact);
    nPr = Permutations(nfact, nmrfact);

    printf("\nnCr = %d", nCr);
    printf("\nnPr = %d", nPr);
}

int fact(int x)
{
    int i, y=1;

    for (i=1; i<=x; i++)
        y *= i;
    
    return y;
}

int Combinations(int nfact, int nmrfact, int rfact)
{
    int nCr;
    
    nCr = (nfact / (nmrfact * rfact));

    return nCr;
}

int Permutations(int nfact, int nmrfact)
{
    int nPr;

    nPr = (nfact / nmrfact);

    return nPr;
}