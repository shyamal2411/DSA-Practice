
public class StaticNonStatic {
    // Static method
    static void myStaticMethod() {
        System.out.println("Static Class");
    }

    // Public method
    public void myPublicMethod() {
        System.out.println("Public objects");
    }

    // Main method
    public static void main(String[] args) {
        myStaticMethod(); // Call the static method
        // myPublicMethod(); This would compile an error

        StaticNonStatic myObj = new StaticNonStatic(); // Create an object of Main
        myObj.myPublicMethod(); // Call the public method on the object
    }
}