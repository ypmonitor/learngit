package Main;
import Dist.*;
import java.awt.Point;

public class CDMain {

	public static void main(String[] args) {
		Point one = new Point(55,22);
		Point anotherone = new Point(55,222);
		Cdistance cdistance = new Cdistance(one, anotherone);
		System.out.println(cdistance.calDistance());
	}

}
