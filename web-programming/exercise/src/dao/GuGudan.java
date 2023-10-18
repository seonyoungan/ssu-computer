package dao;
import java.util.ArrayList;

public class GuGudan {
	private ArrayList<String> num = new ArrayList<>(); //멤버변수 ㅔrivate로 지
	
	public GuGudan() {
		
	} //인수없는 기본생성
	
	public ArrayList<String> getNum() { //getter/setter()메소드 존재

		return num;
	}
	
	public void setNum(ArrayList<String> SetNum) {
		this.num = num;
	}
	
	public void process() {;
		for(int i=1;i<=9;i++){
			num.add("5 * "+ i + "=" + 5*i);
		}
	}
}
