module qt.core.QtConcurrent;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QtConcurrent
{
    public enum ReduceOption {
        UnorderedReduce = 1,
        OrderedReduce = 2,
        SequentialReduce = 4
    }

    alias ReduceOption.UnorderedReduce UnorderedReduce;
    alias ReduceOption.OrderedReduce OrderedReduce;
    alias ReduceOption.SequentialReduce SequentialReduce;

    public enum ThreadFunctionResult {
        ThrottleThread = 0,
        ThreadFinished = 1
    }

    alias ThreadFunctionResult.ThrottleThread ThrottleThread;
    alias ThreadFunctionResult.ThreadFinished ThreadFinished;

// Functions
// Field accessors
    public alias void __isQtType_QtConcurrent;

// Injected code in class

    static {
        qt.QtJambi_LibraryInitializer.init();
        qt.core.QtJambi_LibraryInitializer.init();
    }

    /**
     * An implemetation of this interface is given one to QtConcurrent's map() methods.
     * The map() method of this interface is called for each object in a java.util.Collection.
     *
     */
    public interface MapFunctor<T> {
        /**
         * This function is called for each item in the Collection. The function is then free to alter <tt>object</tt> as it see fit.
         */
            public void map(T object);
    }
    /**
     *  Calls function once for each item in sequence. The function is passed a reference to the item, so that any modifications done to the item will appear in sequence.
     */
        public static native <T> QFutureVoid map(java.util.Collection<T> sequence, MapFunctor<T> functor);

    /**
     *  Calls function once for each item in sequence. The function is passed a reference to the item, so that any modifications done to the item will appear in sequence.
     */
        public static native <T> void blockingMap(java.util.Collection<T> sequence, MapFunctor<T> functor);

    /**
     * Implement this interface to perform a mapped operation. An implementation of the interface is sendt
     * to ome of the mapped methods of QtConcurrent, which applies the MappedFunctor.map() method to all elements in a collection,
     * and returns the result.
     */
    public interface MappedFunctor<U, T> {
        /**
         * This method is called for each object in a collection. It should returned a new altered
         * object.
         */
            public U map(T object);
    }

    /**
     * Calls function once for each item in sequence and returns a future with each mapped item as a result. You can QFutureIterator to iterate through the results.
     *
     */
        public static native <U, T> QFuture<U> mapped(java.util.Collection<T> sequence, MappedFunctor<U, T> functor);

    /**
     * Calls function once for each item in sequence and returns a future with each mapped item as a result. You can QFutureIterator to iterate through the results.
     */
        public static native <U, T> java.util.List<U> blockingMapped(java.util.Collection<T> sequence, MappedFunctor<U, T> functor);

    /**
     * Implement this interface in order to perform a reduce operation.
     * <p>
     * The reduce method will be called once per intermediate result (the result of the mapping of the data)
     * and the very first time the reduce() method is called for the particular data set, the result is set to
     * the returned value of the defaultResult() method.
     */
    public interface ReducedFunctor<U, T> {
        public U defaultResult();

        /**
         *  Performs a reduce operation on <tt>intermediate</tt>. <tt>result</tt> is the result of the reduction.
         */
            public void reduce(U result, T intermediate);
    }

    /**
     * This is an overloaded method provided for convenience.
     * <p>
     * It is equivalent of mappedReduced(sequence, functor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce)
     */
    public static <U, V, T> QFuture<U> mappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor) {
        return mappedReduced(sequence, functor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce);
    }

    /**
     * This is an overloaded method provided for convenience.
     * <p>
     * Note that while mapFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is determined by reduceOptions.
     *
     */
    public static <U, V, T> QFuture<U> mappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, ReduceOption ... options) {
        return mappedReduced(sequence, functor, reducedFunctor, new ReduceOptions(options));
    }

    /**
     * Calls mapFunction once for each item in sequence. The return value of each mapFunction is passed to reduceFunction.
     * <p>
     * Note that while mapFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is determined by reduceOptions.
     *
     */
    public static <U, V, T> QFuture<U> mappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, ReduceOptions options) {
        return mappedReduced(sequence, functor, reducedFunctor, options.value());
    }

    private native static <U, V, T> QFuture<U> mappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, int options);

    /**
     * This is an overloaded method provided for convenience.
     * <p>
     * It is equivalent of calling blockingMappedReduced(sequence, functor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce)
     *
     */
    public static <U, V, T> U blockingMappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor) {
        return blockingMappedReduced(sequence, functor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce);
    }

    /**
     * Calls mapFunction once for each item in sequence. The return value of each mapFunction is passed to reduceFunction.
     * <p>
     * Note that while mapFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is determined by reduceOptions.
     * <p>
     * Note: This function will block until all items in the sequence have been processed.
     */
    public static <U, V, T> U blockingMappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, ReduceOption ... options) {
        return blockingMappedReduced(sequence, functor, reducedFunctor, new ReduceOptions(options));
    }

    /**
     * Calls mapFunction once for each item in sequence. The return value of each mapFunction is passed to reduceFunction.
     * <p>
     * Note that while mapFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is determined by reduceOptions.
     * <p>
     * Note: This function will block until all items in the sequence have been processed.
     */
    public static <U, V, T> U blockingMappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, ReduceOptions options) {
        return blockingMappedReduced(sequence, functor, reducedFunctor, options.value());
    }

    private native static <U, V, T> U blockingMappedReduced(java.util.Collection<T> sequence, MappedFunctor<V, T> functor, ReducedFunctor<U, V> reducedFunctor, int options);

    /**
     * An implementation of this interface is given to one of QtConcurrent's filtered() methods.
     * The filter method if this interface is called for each item in a java.util.Collection.
     *
     */
    public interface FilteredFunctor<T> {
        /**
         *  This method is called for each item in a java.util.Collection. The items for which
         *  this method returns true are removed from the collection.
         */
            public boolean filter(T object);
    }

    /**
     * Calls filterFunctor's filtered() method once for each item in sequence and returns a new Sequence of kept items. If filterFunction returns true, a copy of the item is put in the new Sequence. Otherwise, the item will not appear in the new Sequence.
     */
        public native static <T> QFuture<T> filtered(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor);

    /**
     * Calls filterFunctor's filtered() method once for each item in sequence and returns a new Sequence of kept items. If filterFunction returns true, a copy of the item is put in the new Sequence. Otherwise, the item will not appear in the new Sequence.
     */
        public native static <T> java.util.List<T> blockingFiltered(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor);

    /**
     * This is an overloaded method provided for convenience. It is equivalent of calling filteredReduced(sequence, filteredFunctor, ReduceOption.UnorderedReduce, ReduceOption.Seq This is an overloaded method provided for convenience. It is equivalent of calling filteredReduced)
     */
    public static <U, T> QFuture<U> filteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor) {
        return filteredReduced(sequence, filteredFunctor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce);
    }

    /**
     * Calls filterFunction once for each item in sequence. If filterFunction returns true for an item, that item is then passed to reduceFunction. In other words, the return value is the result of reduceFunction for each item where filterFunction returns true.
     * <p>
     * Note that while filterFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is undefined if reduceOptions is QtConcurrent::UnorderedReduce. If reduceOptions is QtConcurrent::OrderedReduce, reduceFunction is called in the order of the original sequence.
     */
    public static <U, T> QFuture<U> filteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, ReduceOption ... options) {
        return filteredReduced(sequence, filteredFunctor, reducedFunctor, new ReduceOptions(options));
    }

    /**
     * Calls filterFunction once for each item in sequence. If filterFunction returns true for an item, that item is then passed to reduceFunction. In other words, the return value is the result of reduceFunction for each item where filterFunction returns true.
     * <p>
     * Note that while filterFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is undefined if reduceOptions is QtConcurrent::UnorderedReduce. If reduceOptions is QtConcurrent::OrderedReduce, reduceFunction is called in the order of the original sequence.
     */
    public static <U, T> QFuture<U> filteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, ReduceOptions options) {
        return filteredReduced(sequence, filteredFunctor, reducedFunctor, options.value());
    }
    private native static <U, T> QFuture<U> filteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, int options);

    /**
     * This is an overloaded method provided for convenience. It is the equivalent of calling blockingFilteredReduced(sequence, filteredFunctor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce)
     */
    public static <U, T> U blockingFilteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor) {
        return blockingFilteredReduced(sequence, filteredFunctor, reducedFunctor, ReduceOption.UnorderedReduce, ReduceOption.SequentialReduce);
    }

    /**
     * Calls filterFunction once for each item in sequence. If filterFunction returns true for an item, that item is then passed to reduceFunction. In other words, the return value is the result of reduceFunction for each item where filterFunction returns true.
     * <p>
     * Note that while filterFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is undefined if reduceOptions is QtConcurrent::UnorderedReduce. If reduceOptions is QtConcurrent::OrderedReduce, reduceFunction is called in the order of the original sequence.
     */
    public static <U, T> U blockingFilteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, ReduceOption ... options) {
        return blockingFilteredReduced(sequence, filteredFunctor, reducedFunctor, new ReduceOptions(options));
    }

    /**
     * Calls filterFunction once for each item in sequence. If filterFunction returns true for an item, that item is then passed to reduceFunction. In other words, the return value is the result of reduceFunction for each item where filterFunction returns true.
     * <p>
     * Note that while filterFunction is called concurrently, only one thread at a time will call reduceFunction. The order in which reduceFunction is called is undefined if reduceOptions is QtConcurrent::UnorderedReduce. If reduceOptions is QtConcurrent::OrderedReduce, reduceFunction is called in the order of the original sequence.
     */
    public static <U, T> U blockingFilteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, ReduceOptions options) {
        return blockingFilteredReduced(sequence, filteredFunctor, reducedFunctor, options.value());
    }

    private native static <U, T> U blockingFilteredReduced(java.util.Collection<T> sequence, FilteredFunctor<T> filteredFunctor, ReducedFunctor<U, T> reducedFunctor, int options);

    /**
     * Executes the method <tt>m</tt> through the QtConcurrent framework with the given arguments. The returned QFuture object's result wil be the
     * return value of <tt>m</tt>. Note that this method does not accept function that return void. use runVoidMethod() for this.
     */
    public static <T> QFuture<T> run(Object _this, java.lang.reflect.Method m, Object ... args) {
        if (m.getReturnType() == null || m.getReturnType().equals(Void.TYPE))
            throw new IllegalArgumentException("Cannot call run on method returning void. Use 'runVoidMethod' instead.");

        return runPrivate(_this, m.getDeclaringClass(), m, args, qt.internal.QtJambiInternal.resolveConversionSchema(m.getParameterTypes(), m.getParameterTypes()), qt.internal.QtJambiInternal.typeConversionCode(m.getReturnType()));
    }
    private native static <T> QFuture<T> runPrivate(Object _this, Class<?> declaringClass, java.lang.reflect.Method m, Object args[], int conversionScheme[], byte returnType);

    /**
     * Executes the method <tt>m</tt> with the given arguments using the QtConcurrent framework. Notice that runVoidMethod() does not
     * accept methods that has a return value. Use the run() method for this purpose.
     */
    public static QFutureVoid runVoidMethod(Object _this, java.lang.reflect.Method m, Object ... args) {
        if (m.getReturnType() != null && !m.getReturnType().equals(Void.TYPE))
            throw new IllegalArgumentException("Cannot call runVoidMethod on method returning non-void type. Use 'run' instead.");

        return runVoidMethodPrivate(_this, m.getDeclaringClass(), m, args, qt.internal.QtJambiInternal.resolveConversionSchema(m.getParameterTypes(), m.getParameterTypes()));
    }
    private native static QFutureVoid runVoidMethodPrivate(Object _this, Class<?> declaringClass, java.lang.reflect.Method m, Object args[], int conversionScheme[]);

}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

