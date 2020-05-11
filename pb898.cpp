int sumfactcif(int n){
    int sum = 0, cop, fact = 1;
    if(n == 0) return 1;
    else {

    while(n != 0){
        cop = n % 10;
        for(int i = cop; i >= 1; i--){
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n /= 10;
    }
        return sum;
    }
}
