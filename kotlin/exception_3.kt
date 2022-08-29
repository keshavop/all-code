fun main(args: Array<String>) {
    try{
        val a = IntArray(5)
        a[5] = 10/0
    }
    catch(e: Exception){
        println("parent exception class")
    }
    catch(e: ArithmeticException){
        println("arithmetic exception catch")
    }
    catch(e: ArrayIndexOutOfBoundsException){
        println("array index outofbound exception")
    }
    
    println("code after try catch.........")
}