#pragma once

#include <unordered_set>

namespace GL {

class DynamicObject
{
public:
    virtual ~DynamicObject() {}
    bool deletable      = false;
    virtual void move() = 0;
};

inline std::unordered_set<DynamicObject*> move_queue;

} // namespace GL
