package Java_Lab;

class thisconsOverload {
    private int a,b;


    private thisconsOverload (int i,int j) 
    {
        this.a = i;
        this.b = j;
    }
    private thisconsOverload(int i) 
    {
        this(i,i);
    }
    private thisconsOverload()
    {
        this(0);
    }
    public String toString(){
        return this.a + " + " + this.b + "i";
    }
    public static void main(String[] args) {
        thisconsOverload c1=new thisconsOverload();
        
        thisconsOverload c2=new thisconsOverload(2,6);
        
        thisconsOverload c3=new thisconsOverload();

            System.out.println(c1);
            System.out.println(c2);
            System.out.println(c3);
    }
}