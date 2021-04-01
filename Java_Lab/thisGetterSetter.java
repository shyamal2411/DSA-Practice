package Java_Lab;

public class thisGetterSetter {
    String name;

    void setName(String name) {
        this.name = name;
    }

    String getName() {
        return this.name;
    }
    public static void main(String[] args) {
        thisGetterSetter gett = new thisGetterSetter();
        gett.setName("SGPrajapati");
        System.out.println("gett.name = " + gett.getName());
    }
}
