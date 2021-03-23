
/*----SHYAMAL----*/

package Java_Lab;

class Figures {
    double shapearea; // area can be of decimal value too!

    public void shapearea() {
        System.out.println(shapearea);
    }
}

class circle extends Figures {
    int r = 5;

    public void shapearea() {
        shapearea = 3.14 * r * r; /* Respective areas of diff. shapes */
        System.out.println(shapearea);
    }
}

class rectangle extends Figures {
    int l = 5, b = 3;

    public void shapearea() { /* Method Overriding */
        shapearea = l * b;
        System.out.println(shapearea);
    }
}

class triangle extends Figures {
    int b = 5, h = 7;

    public void shapearea() {
        shapearea = 0.5 * b * h;
        System.out.println(shapearea);
    }
}

/* Main class name same as file name */
public class overrideExample {
    /*----190010107055-----*/
    public static void main(String[] args) {
        /* Objects */
        Figures ob1 = new circle();
        Figures ob2 = new rectangle();
        Figures ob3 = new triangle();

        /* Calls */
        ob1.shapearea();
        ob2.shapearea();
        ob3.shapearea();
    }
    /* 190010107055 */
}