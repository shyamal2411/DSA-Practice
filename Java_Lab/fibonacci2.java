class fibonacci2 {

    public static void fiboFunc(int num) {
        int arr[] = new int[num];
        for (int i = 0; i < num; i++) {
            
            if (i == 0 || i == 1)
             {
                arr[i] = 1;
            } 
            else 
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String args[]) {


        int num = Integer.parseInt(args[0]);
        if (num < 0) { //if num is -ve then fall into if part els print the output
            System.out.println("NumberFormatException");
        } else {
            fiboFunc(num);
        }
    }
}