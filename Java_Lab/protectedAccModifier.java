

class Java{
    protected void display()
    {
        System.out.println("This is java class.");
    }
}
public class protectedAccModifier extends Java {
    public static void main(String[] args) {
        protectedAccModifier pa= new protectedAccModifier();

        pa.display();
    }
}

/*Here we need to inherit the class having protected Access Modifiers in order to use them in other classes.*/