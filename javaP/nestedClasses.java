package javaP;

class Outerclass{
    int x = 10;

   static class Innerclass{
        int y=15;
    }
}


public class nestedClasses {
    public static void main(String[] args) {
        // Outerclass outer = new Outerclass();
        Outerclass.Innerclass inner = new Outerclass.Innerclass();
        System.out.println(" " + inner.y);
    }
}
