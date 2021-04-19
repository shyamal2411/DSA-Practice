
class Gameshape{
    public void displayshape(){
        System.out.println("Shape display working well");
    }
}

class playerpiece extends Gameshape{
    public void movepiece(){
        System.out.println("Moving game piece.");
    }
}

public class polymorph1{
    public static void main(String[] args) {
        playerpiece shape =new playerpiece();
        shape.displayshape();
        shape.movepiece();
    }
}