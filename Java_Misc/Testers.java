package Java_Misc;
class Testers{
    
    public static String moveSpecialCharacters(String str){
      int n = str.length();
      String reg = "[a-zA-Z0-9\\s+]";
      String r="", s="";
      for(int i = 0; i < n; i++){
          char c =str.charAt(i);
          if(String.valueOf(c).matches(reg))
                r+=c;
            else
                s+=c;
          //   swap(str[i], str[i+1]);
      }
      return r+s;
	}
	
	public static void main(String args[]){
	    String str = "He@#$llo!*&";
	    System.out.println(moveSpecialCharacters(str));
	}
	
}