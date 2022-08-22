fun main(args: Array<String>) {
    val theList = listOf("1","two","three","four")
    println(theList);

    // to create a mutable list
    val theMutableList = mutableListOf("one","two","three","four")
    println(theMutableList);

    // iterator to list
    val itr = theList.listIterator()
    while(itr.hasNext()){
        println(itr.next())
    }


    theList.forEach{
        println(it)
    }

    println("size of list "+ theList.size)

    if("two" in theList){
        println(true)
    }
    else{
        println(false)
    }

    if(theList.contains("two")){
        println(true)
    }
    else{
        println(false)
    }

    println(theList.isEmpty())

    println("index of 'two':  "+ theList.indexOf("two"))
}