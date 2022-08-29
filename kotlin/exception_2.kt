// kotlin try as an expression

fun main(args: Array<String>) {
    val str = getNumber("10.1")
    println(str)
}

fun getNumber(str:String):Int{
    return try{
        Integer.parseInt(str)
    }
    catch(e:NumberFormatException){
        // println(e)
        println("CompileError")
    }
}