// Tail Recursion

fun main(args: Array<String>) {
    val a = 4
    val result = factorial(a)
    println(result)}

    fun factorial(a: Int, accum: Int = 1): Int{
        val result = a*accum
        return if(a<=1){
            result
        }
        else{
            factorial(a-1,result)
        }
    }