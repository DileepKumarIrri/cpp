class test {
    public static void main(String ar[])
    {   char [] s ={'l','i', 's'};
        reverseString(s);
        for(int i=0 ;i< s.length;i++)
        {
            System.out.println(s[i]);
        }
    }
    public static void reverseString(char[] s) {
        for(int i=0;i<s.length/2;i++)
        {
           char temp = s[s.length-1-i];
           s[s.length-1-i] = s[i];
           s[i] = temp;
        }
    }
}