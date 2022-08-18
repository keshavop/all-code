/* 
/n -> break the line
/t -> give a space of 1 character
*/
fun main(){
    var a:Int =10;
    var d:Double = 100.0
    var f: Float = 100.4f
    var l: Long = 10000000
    var s:Short = 9
    var b:Byte = 1
    var c:Char = 'K'
    var st:String = "kiki"
    var str:String = """This is android dev
    we are learning kotlin"""

    var tu:Boolean = true
    var fa:Boolean = false

    var n:Boolean? = null
    println("Int ="+a)
    println("Double="+d)
    println("Float="+f)
    println("Long="+l)
    println("Short="+s)
    println("Byte="+b)
    println("Char="+c)
    println("String="+st)
    println("String="+str)
    println("BooleanTrue="+tu)
    println("BooleanFalse"+fa)
    println("BooleanFalse"+n)

    
    var A:Long = a.toLong()
    println("intToLong="+A)

    
}

/*
toByte()
toShort()
toInt()
toLong()
toDouble()
toChar()
*/