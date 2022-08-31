open class Base(){
    open val name:String
    init{
        name = "Base"
    }
    open fun displayName(){
        println("I am in " + this.name)
    }
}

class Child():Base(){
    override fun displayName(){
        super.displayName()
        println("I am in " + super.name)
    }
}

fun main(args: Array<String>) {
    var a = Child()
    a.displayName()
}