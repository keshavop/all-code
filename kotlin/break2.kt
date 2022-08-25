fun main(args: Array<String>) {
    outerLoop@ for (i in 1..3){
        innerLoop@ for(j in 1..3){
            println("i=$i and j=$j")
            if(i==2){
                break@innerLoop
            }
        }
    }
}