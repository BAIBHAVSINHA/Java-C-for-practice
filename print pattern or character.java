Write a program to print each line of a file that contains a particular pattern or string or characters.
The output should begin with the information on the word and character where this was found(x.y meaning x th word in the line and y th character in the word)

 E.g:
'ould'
Input: file.txt
How could this happen?
Re-mould the nearest output.
would this always happen?
 
Output:
2.1:How could this happen?
1.4:Re-mould the nearest output.
1.1:would this always happen?

 
 Sol:->
static void findPattern(String str,String pattern){
String str2[]=str.split("\\s");
Pattern p=Pattern.compile(pattern);
Matcher match=null;
