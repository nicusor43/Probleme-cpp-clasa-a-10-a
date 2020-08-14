int nr_cif_zero(int n){
    if(n<10){
        if(n == 0)
            return 1;
    }
    else {
        if(n%10==0)
            return 1 + nr_cif_zero(n/10);
        else
            return nr_cif_zero(n/10);
    }
    return 0;
}
//cplm concurs ca eu nici nu trec clasa dracu