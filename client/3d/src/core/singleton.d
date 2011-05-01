module util.singleton;

abstract class Singleton {
    private static Singleton instance;
 
    public static Singleton opCall() { //FIXME: called every function?
        if(instance is null) {
            instance = new Singleton();
        }
        return instance;
    }
 
    private this() {}
}