// finally block

fun main(args: Array<String>) {
    try {
        val data = 110/5
        println(data)
    }
    catch(e: NullPointerException) {
        println(e)
    }
    finally{
        println("finally block always excutes")
    }

}