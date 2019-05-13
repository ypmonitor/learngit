package Main;
import ds.*;
import java.util.*;

public class User {

	public static void main(String[] args) {
		Class2015 s1 = new Class2015();
		Student c1 = new Student("1","a","a1",22.9,22.3,88.5);
		Student c2 = new Student("2","b","b1",61,22.3,40.5);
		Student c3 = new Student("3","c","c1",82.9,82.3,45.5);
		Student c4 = new Student("4","d","d1",83.9,88.3,98.5);
		s1.calStudent(c1,0.5,0.2,0.3);
		s1.calStudent(c2,0.5,0.2,0.3);
		s1.calStudent(c3,0.5,0.2,0.3);
		s1.calStudent(c4,0.5,0.2,0.3);
		Iterator line = s1.getSn1().keySet().iterator();
		while(line.hasNext()){
			String s = (String) line.next();
			Student c = s1.getSn1().get(s);
			System.out.println("Ñ§ºÅ£º"+c.getSno() +"\nÐÕÃû£º"+c.getSname());
			System.out.println("×ÜÆÀ:"+c.getSumsore());
		}
	}

}
