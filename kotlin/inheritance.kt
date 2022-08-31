// Inheritance in kt

open class base {
    init{
        println("I am in base class")
    }
}

open class child{
    init{
        println("I am in child class")
    }
}

class GrandChild:child(){
    init{
        println("I am in GrandChild Class")
    }
}

fun main(args: Array<String>) {
    var a = GrandChild()
}