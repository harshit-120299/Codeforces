import java.util.*;
import java.io.*;
import java.lang.*;

class is_string_rotation{
	public static void main(String[] args) {
		StringBuilder input1 = new StringBuilder();
 
		String a = "abcdef";
		String b = "defabc";
		String c = b.concat(b);
		System.out.println(c);
		if (c.contains(a)) {
			System.out.println("yes");
		}
		else 
			System.out.println("No");

	}
}