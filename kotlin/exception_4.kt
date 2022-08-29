fun main(args: Array<String>) {
    val num = IntArrayOf(2,4,16,32,64,128,256,512)
    val deno = IntArrayOf(2,0,4,0,8)
    try{
        for (i in nume.indices) {
            try{
                println(num[i].toString() + " / " + deno[i] + " is " + num[i])
            }
            catch(exc: ArithmeticException){
                println
            }
        }
    }
}