package Dist;
import java.lang.Math;
import java.awt.Point;
public class Cdistance {
	private Point onepoint;
	private Point anotherpoint;
	public Cdistance() {
		super();
	}
	public Cdistance(Point onepoint, Point anotherpoint) {
		super();
		this.onepoint = onepoint;
		this.anotherpoint = anotherpoint;
	}
	public Point getOnepoint() {
		return onepoint;
	}
	public void setOnepoint(Point onepoint) {
		this.onepoint = onepoint;
	}
	public Point getAnotherpoint() {
		return anotherpoint;
	}
	public void setAnotherpoint(Point anotherpoint) {
		this.anotherpoint = anotherpoint;
	}
	
	public double calDistance(){
		double result;
		double dx = onepoint.getX() -anotherpoint.getX();
		double dy = onepoint.getY() -anotherpoint.getY();
		result = Math.sqrt(Math.abs(dx*dx - dy*dy));
		return result;
	}

}
