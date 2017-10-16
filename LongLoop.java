public class LongLoop{
	public static void main(String[] args){
		long i;
		for(i=0; i < Long.MAX_VALUE; i+=1){}
		System.out.println(i);
	}
}
