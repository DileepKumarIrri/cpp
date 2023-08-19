class Solution {

    public static void main(String ar[])
    {
        System.out.println(lengthOfLastWord("   fly me   to   the moon  "));
        
    }
    public static int lengthOfLastWord(String s) {
        int k= 0;
        for (int i =s.length();i>0;i--)
        {   

            int j =32;
            if (s.charAt(i-1)!=32)
            {
                k++;
               j = i;
             }
            if (s.charAt(i-1)==32 && j!= 32 )
            {
              break;
            }
        };
        return k-1;
    }
}