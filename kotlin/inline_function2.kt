fun main(){var b:Double=64.0;
    //a();
    //a({println("Inline Function parameter")});
    a({println(Math.sqrt(b))});
    }
    inline fun a(function:()->Unit){
    println("I am inline Function-A");
    function();
    println("I am inline function -B");
    }