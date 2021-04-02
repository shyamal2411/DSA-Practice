// package Java_Lab;

// class data{
//     private String name;

// }

// public class privateAccModifier {
//     public static void main(String[] args) {
//         data d = new data();
//         d.name = "SG";
//     }
// }

/* As we get the error regarding unable to access the name variable, we can't access name when needed
so we use getter setter to get the vaiable.'*/

package Java_Lab;

class data{
    private String name;

public String getName(){
return this.name;
}

public void setName(String name)
{
    this.name = name;
}

}

public class privateAccModifier{
    public static void main(String[] args) {
        data d = new data();
        d.setName("SG");
        System.out.println(d.getName());
    }
}