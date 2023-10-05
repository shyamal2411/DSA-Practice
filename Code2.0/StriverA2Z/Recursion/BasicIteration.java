class BasicIteration{

    static int count = 0;
    static void print(){
        if(count == 5){ return; }

        count++;
        System.out.println(print());
    }


    public static void main(String args[]){
        print();
    }
}