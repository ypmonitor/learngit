package ds;

import java.util.*;

public class Class2015 {
	private Map<String,Student> sn1;
	public Class2015() {
		// TODO Auto-generated constructor stub
		sn1 = new TreeMap<String,Student>();
	}
	
	public void calStudent(Student c1,double s1,double s2,double s3){
		c1.calso(s1,s2,s3);
		if(c1.getSumsore() < 60){
			sn1.put(c1.getSno(), c1);
		}
	}

	public Map<String, Student> getSn1() {
		return sn1;
	}

	public void setSn1(Map<String, Student> sn1) {
		this.sn1 = sn1;
	}
	
	

}
