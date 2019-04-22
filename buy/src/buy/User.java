package buy;

import java.util.*;

public class User implements Cart{
	private String bnum; //订单号
	private String username;
	private Calendar btime;
	private double fmoney; //实际支付金额

	
	public User(String bnum, String username, Calendar btime) {
		super();
		this.bnum = bnum;
		this.username = username;
		this.btime = btime;
	}
	public User(){
		
	}
	
	@Override
	public double discount(double amount) {
		if((1+btime.get(btime.MONTH)) == 5 && btime.get(btime.DAY_OF_MONTH) == 1)
			fmoney = 0.8 *amount;
		else
			fmoney = amount;
		
		return fmoney;
	}
	public String getBnum() {
		return bnum;
	}
	public void setBnum(String bnum) {
		this.bnum = bnum;
	}
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	@Override
	public String toString() {
		return "User [username=" + username + ", btime=" + btime.get(btime.YEAR) +"年"+(1+btime.get(btime.MONTH))+"月"+btime.get(btime.DAY_OF_MONTH)+"日"+ ", fmoney=" + fmoney +  "]";
	}

}
