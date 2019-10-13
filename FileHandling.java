import java.io.*; 
class FileHandling
{ 
	public static void main(String[] args) throws IOException 
	{ 
		String str = "Vijay Dhakar"; 

		FileWriter in=new FileWriter("output.txt"); 
    
    try{
 
		for (int i = 0; i < str.length(); i++) 
			in.write(str.charAt(i)); 

		System.out.println("Writing successful"); 
    }
    catch{
        System.out.println("Writing unsuccessful"); 
    }
	} 
}
