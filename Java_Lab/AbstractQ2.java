/*------ SHYAMAL PRAJAPATI
  ------ 190010107055
*/

abstract class Shape {
    float a, b, r;
    abstract float area();
}

//Triangle
class Triangle extends Shape {
    Triangle(float p, float q) {
        a = p;
        b = q;
    }

    float area() {
        System.out.print("Triangle:\t");
        return (a * b) / 2;//area with abstract class
    }
}

//Rectangle class 190010107055
class Rectangle extends Shape {
    Rectangle(float p, float q) {
        a = p;
        b = q; //taking parameters from main function, call by value
    }

    float area() {
        System.out.print("Rectangle:\t");
        return a * b;//abstract class from shape
    }
}

//Circle class  190010107055
class Circle extends Shape {
    Circle(float p) {
        r = p;
    }

    float area() {
        System.out.print("Circle:\t\t");
        return 3.14f * r * r;
    }
}

class AbstractQ2 {
    public static void main(String arg[]) {
        Triangle tr = new Triangle(2f, 5f);
        Rectangle rec = new Rectangle(4f, 14f);
        Circle ci = new Circle(11f);

        System.out.println(tr.area());
        System.out.println(rec.area());
        System.out.println(ci.area());

    }
}
