import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextBigInteger())
		{
			BigInteger n = sc.nextBigInteger();
			BigInteger m = new BigInteger("0");
			boolean flag = false;
			while(true)
			{
				m = m.add(new BigInteger("1"));
				if(m.equals(n.toString().length())) break;
				BigInteger tmp = n.multiply(m);
				String tmps = tmp.toString();
				String tmpn = n.toString();
				if(tmps.length()!=tmpn.length())
				{
					flag = true;
					break;
				}
				int cnt[] = new int[11];
				for(int i=0;i<tmps.length();i++)
					cnt[tmps.charAt(i)-'0']++;
				for(int i=0;i<tmpn.length();i++)
				{
					cnt[tmps.charAt(i)-'0']--;
					if(cnt[tmps.charAt(i)-'0']<0)
					{
						flag = true;
						break;
					}
				}
			}				
			if(flag) System.out.println(n + " is not cyclic\n");
			else System.out.println(n + " is cyclic\n");
		}
	}

}
