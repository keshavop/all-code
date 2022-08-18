// High order function

fun main(args: Array<String>) {
    val func = operation()
    println(func(4))
}

fun square(x:Int) = x*x

fun sum(x:Int) = x+x
fun operation():(Int)->Int{
    return ::sum
}