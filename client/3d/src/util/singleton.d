module util.singleton;

abstract class Singleton(T) {
    private static T instance;
 
    override public static T opCall() { //FIXME: called every function?
        if(instance is null) {
            instance = new T();
        }
        return instance;
    }
 
    private this() {}
}