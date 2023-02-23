// Copyright 2021 NNTU-CShttps://github.com/lissa-vet/ADS-0/tree/b11

int gcd(int a, int b) {
    int nod = 0;
    for (int i = 1; a > i || b > i; i++) {
        if ((a % i == 0) && (b % i == 0))
            nod = i;
        i++;
    }
    return nod;
}
