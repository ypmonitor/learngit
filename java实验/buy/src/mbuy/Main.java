package mbuy;

import java.util.Calendar;

import buy.*;

public class Main {

	public static void main(String[] args) {
		String username = new String("уехЩ");
		String bnum = new String("888333");
		double bmoney = 1000;
		Calendar btime = Calendar.getInstance();
		btime.set(2019, 4,1);
		User user = new User(bnum,username,btime);
		user.discount(1000);
		System.out.println(user);
		
	}

}
