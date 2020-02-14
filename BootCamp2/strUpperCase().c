void strUpperCase(char str[])
    for ( int index = 0; str[index] > 0 ; index++ ) {
        if ( str[index] >= 'a' ) {
            str[index] += 'A'-'a';
        }
    }
}
