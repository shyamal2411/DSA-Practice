

public class constructorr {
    int i;
    private constructorr(){
    i=24;
        System.out.println("Constructor called...");
    }
    public static void main(String[] args) {
        constructorr cc= new constructorr();
        System.out.println("Value of i: " +cc.i);
    }
}
