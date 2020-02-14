int arrayUnique(int array[], int len) {
    int index = 0;
    
    for ( int i = 1; i < len; i++ ) {
        int count = 0;
    
        for ( int j = 0; j < i; j++ ) {
            if ( array[i] == array[j] ) {
                count += 1;
            }
        }
        if ( count == 0 ) {
            index += 1;
            array[index] = array[i];
        }
    }
    
    return index+1;
}
