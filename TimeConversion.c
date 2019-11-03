char* timeConversion(char* s) {
    /*
     * Write your code here.
     */
    
    int a = (int)s[0] - '0';
    int b = (int)s[1] - '0';
    int ab = (a * 10 + b);
    int hour = 0;
    char cha[3];
    int i = 1, j = 0, k = 0;
    static char end[8]; 
    
    strncpy(end, s, 8);
    
    if (s[8] == 'A'){
        if (ab == 12){
            hour = 0;
            while (i >= 0){
                cha[i] = (hour % 10) + '0';
                hour = hour / 10;
                i--;
            }
        }
        else
            return end;
    }
        
    if (s[8] == 'P'){
        if (ab != 12)
            hour = ab + 12;
        else
            hour = ab;        
        while (i >= 0){
            cha[i] = (hour % 10) + '0';
            hour = hour / 10;
            i--;
        }
    }
    
    while (k < 2){
        end[k] = cha[k];
        k++;
    }

    return end;
}
