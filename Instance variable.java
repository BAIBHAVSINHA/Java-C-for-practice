Instance variables are non-static variables and are declared in a class outside any method, constructor or block.
As instance variables are declared in a class, these variables are created when an object of the class is created and destroyed when the object is destroyed.
Unlike local variables, we may use access specifiers for instance variables.
If we do not specify any access specifier then the default access specifier will be used.

  
eg:->
  public class InstanceVariable { 
    int instanceVarId; 
    String instanceVarName; 
    public static void main(String args[]) 
    { 
        InstanceVariable obj = new InstanceVariable(); 
        obj.instanceVarId = 0001; 
        obj.instanceVarName = "InstanceVariable1"; 
        System.out.println("Displaying first Object:"); 
        System.out.println("instanceVarId==" + obj.instanceVarId); 
        System.out.println("instanceVarName==" + obj.instanceVarName); 
  
        InstanceVariable obj1 = new InstanceVariable(); 
        obj1.instanceVarId = 0002; 
        obj1.instanceVarName = "InstanceVariable2"; 
        System.out.println("Displaying Second Object:"); 
        System.out.println("instanceVarId==" + obj1.instanceVarId); 
        System.out.println("instanceVarName==" + obj1.instanceVarName); 
    } 
} 
