fun main(args: Array<String>) {
    outerLoop@ for (i in 1..3) {
        innerLoop@ for (j in 1..3) {
            if(i==2){
                continue@outerLoop
            }
            println("i=$i and j=$j")
        }
    }
}