

public class thisKeyword {
    int instanceVar;

    thisKeyword(int instanceVar)
    {
        this.instanceVar = instanceVar;
        System.out.println("This reference is " + this);
    }

    public static void main(String[] args) {
        thisKeyword keyword = new thisKeyword(8);
        System.out.println("Object reference= " + keyword);
    }
}
