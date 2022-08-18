// High order function

//  :: -> denotes a function in kotlin


fun main(args: Array<String>) {
    val result = calculate(4,5,::sum)
    // val result = calculate(4,5,::multiplication)
    println(result)
}

fun sum(a:Int, b:Int)=a+b

fun multiplication(a:Int, b:Int)=a*b

fun calculate(a:Int, b:Int, operation:(Int, Int)->Int):Int{
    return operation(a,b)
}