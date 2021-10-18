public class block {
    
    public static void main(String[] args) {
  
      // Code here CANNOT use x
  
       {// This is a block
  
        // Code here CANNOT use x
  
        int x = 100;
  
        // Code here CAN use x
        System.out.println(x);
  
     // The block ends here
  
    // Code here CANNOT use x
  }
    }
  }