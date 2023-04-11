#include <tasks.h>

const Task* choose_more_important_task(const Task* t1, const Task* t2) {
    if (t1->priority >= t2->priority)
        return t1;
    else
        return t2;
}

const char* priority_as_str(Priority p) {
    switch (p) {
        case LOW: return "LOW";
        case MEDIUM: return "MEDIUM";
        case HIGH: return "HIGH";
        default:
            return "unknown";
    }
}

void increase_priority(Priority* p) {
    *p = *p + 1;
    if (*p > HIGH)
        *p = HIGH;
}

void transform_task(Task* t, void(* f)(Priority*)) {
    f(&t->priority);
    f(&t->priority);
}