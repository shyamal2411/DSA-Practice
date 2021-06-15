import java.util.*;

public class ArrayListiterator {
public static void main(String args[])
{
	ArrayList<String> list = new ArrayList<String>();
	list.add("Ravi");
	list.add("Vijay");
	list.add("Tirth");
	
	System.out.println(list);
	System.out.println("Transerving through List Iterator:");
	ListIterator<String> list1 = list.listIterator(list.size());
	
	while (list1.hasPrevious())
	{
		String str = list1.previous();
		System.out.println(str);
	}
	System.out.println("Transversing through loop: ");
	for (int i= 0; i<list.size();i++)
	{
		System.out.println(list.get(i));
	}
	
}
}
