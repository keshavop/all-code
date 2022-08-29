fun main(args: Array<String>) {
    try {
        val data = 20 / 0
    }
    catch(e: ArithmeticException) {
        println(e)
    }
    println("code below exception")
}