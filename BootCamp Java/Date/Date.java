public class Date {
    private int day;
    private int month;
    private int year;
    
    public Date(int day, int month, int year) throws InvalidDateException {
        validate(day, month, year);
        
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public Date() throws InvalidDateException{
        this( 1, 1, 1970);
    }

    private void validate(int day, int month, int year) throws InvalidDateException{
        if ( year < 1 || month < 1 || day < 1 ){
            throw new InvalidDateException("Invalid date");
        }
        if ( year <= 1582 && month <= 10 && day < 15 ){
            throw new InvalidDateException("Try futher date - more than 14.02.1582");
        }
        if ( year < 1582 ){
            throw new InvalidDateException("Try bigger year");
        }
        if ( month > 12 ) {
            throw new InvalidDateException("Try smaller month");
        }
        if ( day > 31 ) {
            throw new InvalidDateException("Try less days");
        }
        if ( month == 2 && day > 29 ) {
            throw new InvalidDateException("Too many days for this month");
        }
        if ( month == 2 && day > 28 && ( year % 4 != 0 || year % 400 != 0 ) ) {
            throw new InvalidDateException("Too many days for this month in this year");
        }
        if ( day > 31 || ( day > 30 && ( month == 4 || month == 6 || month == 9 || month == 11 ) ) )    {
            throw new InvalidDateException("Too many days for this month");
        }
    }


    public int getDay(){
        return this.day;
    }

    public int getMonth() {
        return this.month;
    }

    public int getYear() {
        return this.year;
    }

    public String toString() {
        return day +"."+ month +"."+ year;
    }
}