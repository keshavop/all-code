fun main(args: Array<String>){
    printhello();
    var a = 5
    var b = 6
    sum(a, b)

    var d = args[0].toInt()
    var e = args[1].toInt()
    sum2(d,e)
}

fun printhello(){
    println("Hello!");
}

fun sum(a: Int, b: Int){
    val c = a + b;
    println(c);

}

fun sum2(d: Int, e: Int){
    val f = d + e;
    println(f);

}