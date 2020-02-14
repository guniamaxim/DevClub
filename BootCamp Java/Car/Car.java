public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;
    
    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.model = model;
        this.fuelAmount = 0;
        this.location = location;
        this.model = model;
    }

    public Car() {
        this.fuelCapacity = 60;
        this.fuelConsumption = 0.6;
        this.location = new Point();
        this.model = "Mercedes";
    }
    public double getFuelAmount () {
        return this.fuelAmount;
    }

    public double getFuelCapacity () {
        return this.fuelCapacity;
    }

    public double getFuelConsumption () {
        return this.fuelConsumption;
    }

    public Point getLocation() {
        return this.location;
    }

    public String getModel() {
        return this.model;
    }

    public void drive( Point destination) throws OutOfFuelException {
        double temp_consumption = location.distance(destination) * this.fuelConsumption;
        if ( this.fuelAmount < temp_consumption ) {
            throw new OutOfFuelException();
        }
        this.fuelAmount -= temp_consumption;
        this.location = destination;
    }

    public void drive(double x, double y) throws OutOfFuelException {
        Point destination = new Point (x, y);
        
        drive(destination);
    }

    public void refill(double fuel) throws ToMuchFuelException{
        if ( this.fuelAmount + fuel > fuelCapacity ) {
            throw new ToMuchFuelException();
        }
        this.fuelAmount += fuel;
    }

    public String toString() {
        return "Car model:"+getModel()+'\n'+"Capacity:"+getFuelCapacity()+'\n'+"Fuel consumption:"+getFuelConsumption()+'\n'+"Current fuel amount:"+getFuelAmount()+'\n'+"Current fuel consumption:"+getFuelConsumption();
    }
}
