public class Gun {
    private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;
    
    public Gun (String model, int capacity) {
        this.amount = 0;
        this.capacity = capacity;
        this.isReady = false;
        this.model = model;
        this.totalShots = 0;
    }
    public Gun() {
        this("Beretta", 8);
    }
    public int getAmount() {
        return this.amount;
}

    public int getCapacity() {
        return this.capacity;
    }

    public boolean ready() {
        return this.isReady;
    }

    public String getModel() {
        return this.model;
    }

    public int getTotalShots() {
        return this.totalShots;
    }

    public void prepare() {
        this.isReady = !isReady;
    }

    public void reload() {
        this.amount = this.capacity;
    }

    public void shoot() throws NotReadyException, OutOfRoundsException {
        if (!isReady) {
            throw new NotReadyException ();
        }
        if ( this.amount == 0 ) {
            throw new OutOfRoundsException();
        }
        System.out.println ("Bang!");
        this.amount -= 1;
        this.totalShots += 1;

    }

public String toString() {
    return "Gun model:" + getModel()+'\n'+"Capacity:"+getCapacity()+'\n'+"Total shots:"+getTotalShots()+'\n'+"Amount:"+getAmount()+'\n'+"Ready:"+ready()+'\n';
    }

}