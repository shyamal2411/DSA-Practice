package javaP;

class Animal {
    public void soundd(){
        System.out.println("I make sound");
    }
}

class dog extends Animal{
    public void soundd(){
        System.out.println("I make sound of dog");
    }
}

class cat extends Animal{
    public void soundd(){
        System.out.println("I make sound of cat");
    }
}

class Polymorphi{
    public static void main(String[] args) {
        Animal a = new Animal();
        Animal dog = new dog();
        Animal cat = new cat();
        a.soundd();
        dog.soundd();
        cat.soundd();
    }
}