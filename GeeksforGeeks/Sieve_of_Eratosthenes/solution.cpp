void SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    vector<int>prime(n+1,1);
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1) {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p]==1)
            cout << p << " ";
}