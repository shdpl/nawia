module cfg.cfg;

import std.container;

E impl(E, T...)(T args) if (is(E == interface))
{
    return new E(args);
}