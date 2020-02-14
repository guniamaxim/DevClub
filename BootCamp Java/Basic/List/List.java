public class List {
    private int array[];
    private int capacity;
    private double multiplier;
    private int current;
    
    public List( int capacity, double multiplier) throws OutOfMemoryException {
        this.capacity = capacity;
        this.multiplier = multiplier;
        this.current = 0;
        this.array = new int[capacity];
        if ( array == null ){
            throw new OutOfMemoryException ();
        }
    }
    
    public List() throws OutOfMemoryException {
        this(100, 1.05);
    }
    
    public int size() {
        return this.current;
    }
    
    public int max_size() {
        return this.capacity;
    }
    
    public void erase(int index) throws ZeroLenException {
        if ( this.current == 0 ) {
            throw new ZeroLenException();
        }
        if ( index <= current ) {
            for ( int i = index, j = index + 1; i < current; i++, j++ ) {
                this.array[i] = this.array[j];
            }
        this.current -= 1;
        }
    }
    
    public void insert( int value, int index ) throws OutOfMemoryException {
        if ( this.capacity <= this.current) {
        throw new OutOfMemoryException();
    }
    for ( int i = current - 1, j = current; i >= index; i--, j-- ) {
        this.array[j] = this.array[i];
    }
    this.array[index] = value;
    this.current += 1;
    }
    
    public void find(int value) throws ZeroLenException {
        int finded_index = -1;
    
        if ( this.current == 0 ) {
            throw new ZeroLenException();
        }
        
        for ( int i = 0; i < current; i++ ) {
            if ( this.array[i] == value ) {
                System.out.println("value "+value +" finded at index "+ i );
                finded_index = i;
            }
        }
        if ( finded_index == -1 ) {
            System.out.println ("nothing finded");
        }
    }
    
    public void push_back(int value) throws OutOfMemoryException {
        int newCurrent = this.current + 1;
        
        if ( newCurrent > this.capacity ) {
            int newCapacity = (int) (this.capacity * multiplier);
            if ( newCapacity == this.capacity ) {
                newCapacity += 1;
            }
            int newArray[] = new int [newCapacity];
            if ( newArray == null ) {
                throw new OutOfMemoryException();
            }
        this.capacity = newCapacity;
        this.array = newArray;
        }
        this.current = newCurrent;
        array[current - 1] = value;
    }

    public int pop_back() throws ZeroLenException {
        if (this.current == 0 ) {
            throw new ZeroLenException();
        }
        current -= 1;
        return array[current];
    }

    public void sort() {
        for ( int first = 0, last = this.current - 1; first < last; last-- ) {
        for ( int i = 0, j = i + 1; j <= last; i++, j++ ) {
            if ( this.array[j] < this.array[i] ) {
                int temp = this.array[j];
                
                this.array[j] = this.array[i];
                this.array[i] = temp;
            }
        }
        }
    }
}