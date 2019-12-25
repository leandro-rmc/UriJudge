import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a,b,c;
		a = scanner.nextInt();
		b = scanner.nextInt();
		c = scanner.nextInt();
		if (a > b){
	        if (b <= c)
	        	System.out.println(":)");
	        else
	            if(b - c < a - b)
	            	System.out.println(":)");
	            else
	            	System.out.println(":(");
	    }
	    else{
	        if (a < b){
	            if (b >= c)
	            	System.out.println(":(");
	            else
	                if(c - b < b - a)
	                	System.out.println(":(");
	                else
	                	System.out.println(":)");
	        }
	        else{
	            if (b < c)
	            	System.out.println(":)");
	            else
	            	System.out.println(":(");
	        }
	    }
		scanner.close();
	}
}