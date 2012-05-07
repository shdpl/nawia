= = = Type System = = =
Type system is a little bit like traits.
Firstly, there are two kind of objects - type objects and consumer objects.

Type objects, are defining type(like player, monster), and contain methods on consumer objects.
Usually they have only one instance and it's undesirable for them to change during program execution.

Consumer objects, are instances of type objects ('Player Romuald', 'Npc Roths').
There is a preference to NOT store any function pointers on them. They're only container for data handled by
type object methods. Currently, data is shared between type object instances (unlike in traits) but this
might change.

You can treat type objects as perspective from which you are looking onto consumer-object.
So, instead of inheritance, you are just changing perspectives.

You can look on a 'Player John' from players perspective so he can be banned:
Player.ban(john)

You can look on him as entity as well, so he can teleport
Entity.teleport(john, position)

As you can see, convention is to pass object as first argument.
So, it's similar to passing `this` in classical object oriented programming.
It's all about control, and conceptual difference.