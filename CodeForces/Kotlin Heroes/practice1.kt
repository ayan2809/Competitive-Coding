import java.util.Scanner
fun main() {
    //val t=Scanner(System.`in`)
    val string1 = readLine()!!  
    var t: Int = string1.toInt() 
    while(t!=0)
    {
        val string2 = readLine()!!.split(" ")  
        var a: Int = string2[0].toInt()
        //val string3 = readLine()!!  
        var b: Int = string2[1].toInt()
        val c=a+b
        println(c);
        t--;
    }
    // println("Hello World");
}