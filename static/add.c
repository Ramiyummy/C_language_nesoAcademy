//static int count; >> global static var, acts global, but only for this file scope.

int increment()
{
  static int count; // static var >> wont change, remains in memory even if its declared in a block, it be must assigned to a constant value.
  count = count + 1;
  return (count);
}
