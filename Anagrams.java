Write a function to detect if two strings are anagrams ?
  
  Sol:->
public static boolean isAcronym(String s1, String s2) {

    if (s1.length() != s2.length()) return false;

    HashMap<Character, Integer> charCounts = new HashMap<>();
for (int i = 0; i < s1.length(); i++) {
      if (charCounts.containsKey(s1.charAt(i))) {
           charCounts.put(s1.charAt(i), charCounts.get(s1.charAt(i)) + 1);
      } else {
           charCounts.put(s1.charAt(i), 1);
      }
    }
    
