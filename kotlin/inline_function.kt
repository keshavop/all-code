// inline function

fun main(args: Array<String>) {
    myFunction({
        println("Inline function parameter")
    })
}

inline fun myFunction(function:()->Unit){
    println("I am inline function A")

    function()

    println("I am inline function B")
}