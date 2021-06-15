package w3schools;
import java.io.*;
				//creating a file using functions 
					// created file 
			// part: 01
public class Createfile {
	public static void main(String[] args) {

		try {
			File mobj = new File ("filename.txt");
			if(mobj.createNewFile())
			{
		System.out.println("File created: "+mobj.getName());		
			}
			else {
				System.out.println("File already exists.");
			}
			
		}
		catch(IOException e)
		{
			System.out.println("Error occured.");
			e.printStackTrace();
			
		}
	}

}
