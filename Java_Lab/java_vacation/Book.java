
public class Book {

	private int id;
	private String name;
	private String author;
	private Arraylist<Review> reviews = new Arraylist<>();

	public void addreview (Review review)
	{
		this.review.add(review);
	}
	public String toString()
	{
		return String.format("id = %d name =%s author = %s Review =[%s]",id,name,author,reviews);
	}
}
