public class speed {
  public void fullThrottle(){
      System.out.println("fastest car");
  }  
  public void speeding (int maxSpeed){
      System.out.println("Speed: " + maxSpeed);
  }
  public static void main(String[] args) {
      speed car = new speed();
        car.fullThrottle();
        car.speeding(100);
  }
}
