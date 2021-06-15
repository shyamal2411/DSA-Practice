package w3schools;
import java.io.*;
public class Write_file {

	public static void main(String[] args) {
			try {
				FileWriter myWriter = new FileWriter("filename.txt");
			      myWriter.write("Files in Java might be tricky, but it is fun enough!");
			      //
			      myWriter.close();
			      System.out.println("Successfully wrote the file.");
			      			
		      	}
			catch(IOException e)
			{
				System.out.println("Error occured.");
				e.printStackTrace();
				
			}
		
	}

}
