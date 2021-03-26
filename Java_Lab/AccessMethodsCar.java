package Java_Lab;

public class AccessMethodsCar {
    public static void main(String[] args) {
        AccessMethodsCar car = new AccessMethodsCar();
        car.Throttle();
        car.speed(150);
    }

    public void Throttle() {
        System.out.println("Car is going to throttle");
    }

    public void speed(int maxSpeed) {
        System.out.println("Max speed is " + maxSpeed);
    }

}