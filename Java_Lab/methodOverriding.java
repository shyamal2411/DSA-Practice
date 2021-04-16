

 class animalll {
    
    public void display()
    {
        System.out.println("Animal displayed");
    }
}
    class dogg extends animalll {
        public void display(){
            System.out.println("dogg class");
        }

        public void printmsg(){
            display();
        }
    }
class methodOverriding {
public static void main(String[] args) {
    dogg ll = new dogg();
    ll.printmsg();
}
}
