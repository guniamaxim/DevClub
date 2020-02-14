public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;
    
    public Unit(String name, int hp, int dmg) {
        this.damage = dmg;
        this.hitPointsLimit = hp;
        this.hitPoints = hitPointsLimit;
        this.name = name;
    }
    
    public int getDamage() {
        return this.damage;
    }
    public int getHitPoints() {
        return this.hitPoints;
    }

    public int getHitPointsLimit() {
        return this.hitPointsLimit;
    }
    public String getName() {
        return this.name;
    }

    private void ensureIsAlive() throws UnitIsDeadException {
        if ( this.hitPoints<1 ) {
            throw new UnitIsDeadException(
            );
        }
    }

    public void addHitPoints(int hp) throws UnitIsDeadException {
        ensureIsAlive();
        this.hitPoints += hp;
        if ( this.hitPoints > hitPointsLimit ) {
            this.hitPoints = hitPointsLimit;
        }
    }

    public void takeDamage(int dmg) throws UnitIsDeadException {
        ensureIsAlive();
        this.hitPoints -= dmg;
        if ( this.hitPoints <=0 ) {
            this.hitPoints = 0;
        }
    }

    public void attack(Unit enemy) throws UnitIsDeadException{
        ensureIsAlive();
        enemy.takeDamage(damage);
        counterAttack(enemy);
    }

    public void counterAttack(Unit enemy) throws UnitIsDeadException{
        enemy.ensureIsAlive();
        takeDamage(enemy.damage/2);
    }

    public String toString() {
        return "Unit name is:"+getName()+'\n'+"Unit damage:"+getDamage()+'\n'+"Unit hit point limit:"+getHitPointsLimit()+'\n'+"Unit current hit point:"+getHitPoints()+'\n';
    }
}