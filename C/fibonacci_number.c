int fib(int N){  
    if(N == 0) return 0;
    if(N == 1) return 1;
    
    int* F = malloc((N+1) * sizeof(int));
    *(F+0) = 0;
    *(F+1) = 1;    
    
    int result = 0;
        
    for(int i = 2; i < N+1; i++){
        result = *(F+(i-1)) + *(F+(i-2));
        *(F+i) = result;
    }
            
    return result;

}
