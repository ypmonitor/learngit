package ds;

public class Student implements calso {
	private String sno;
	private String sname;
	private String dtitle;
	private double tsocre;
	private double rsocre;
	private double xsocre;
	private double sumsore;
	public Student() {
		
	}
	
	public Student(String sno, String sname, String dtitle, double tsocre, double rsocre, double xsocre) {
		super();
		this.sno = sno;
		this.sname = sname;
		this.dtitle = dtitle;
		this.tsocre = tsocre;
		this.rsocre = rsocre;
		this.xsocre = xsocre;
	}

	public void calso(double s1,double s2,double s3){
		sumsore = tsocre*s1 + rsocre*s2 + xsocre*s3;
	}

	public String getSno() {
		return sno;
	}

	public void setSno(String sno) {
		this.sno = sno;
	}

	public double getSumsore() {
		return sumsore;
	}

	public void setSumsore(double sumsore) {
		this.sumsore = sumsore;
	}

	public String getSname() {
		return sname;
	}

	public void setSname(String sname) {
		this.sname = sname;
	}
	
	

}
