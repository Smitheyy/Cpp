int greatestvaluebetween3integers(int a, int b, int c){
    return (a > b) ? ((a > c) ? a: c)  :  (b > c) ? b: c;
}
