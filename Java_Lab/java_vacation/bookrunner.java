
public class bookrunner {

	public static void main(String[] args) {

		Book book = new Book (123, "Object oriented Programming with Java","Ranga");
	book.addreview(new review (10, "Great",5));
	book.addreview(new review (101, "awesome",5));
	
	
	System.out.println(book);
	}

}
