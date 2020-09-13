Write a function to detect if two strings are anagrams ?
  
  Sol:->
public static boolean isAcronym(String s1, String s2) {

    if (s1.length() != s2.length()) return false;

    HashMap<Character, Integer> charCounts = new HashMap<>();
