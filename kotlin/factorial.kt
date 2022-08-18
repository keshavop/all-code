fun main(){
    var n = 6
    println(factorial(n))
    var a = 6
    println(factorial2(a))
}

fun factorial(n: Int):Int{
    if(n==0 ||n==1)
        return 1

    return n*factorial(n-1)
}

fun factorial2(a:Int, b:Int = 1):Int{
    val c = b*a
    if(a<=1)
        c=a
    else
        factorial2(a-1,c)

    return c
}