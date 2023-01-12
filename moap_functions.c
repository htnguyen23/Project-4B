
// for each of the following functions 
// correct the prototype
// write function body
// replace return with the correct return statement
//
// you may write as many helper functions here as you wish

// This functin adds two values together and returns the sum.
int algorithm_1() {
    // use variables or just return value?
    return (8000 + 63);  
}

// This function returns either a/b if a >= b, or a+a+a+b if not.
int algorithm_2(int a, int b) {
    if (a >= b) {
        int c;
        c = a / b;
        return c;
    }
    int d = a + a + a;
    d = d + b;
    return d;
}

// This function helps alg 3 by decrementing i.
int helper_3(int i) {
    i -= 1;
    return i;
}

// This function increments a by a b times (multiplication?)
int algorithm_3(int a, int b) {
    int i = b;
    int c = 0;
    while (0 < i) {
        c = c + a;
        i = helper_3(i);
    }    
    return c;
}

// This function assigns b the value of b+b+b.
void algorithm_4(int* b) {
    int c = *b;
    c = c + c + c;
    *b = c;
}



