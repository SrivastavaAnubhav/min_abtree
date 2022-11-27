#include "adapter.h"

int main() {
    auto ds = ds_adapter<long long, long long>(10, 0, 0);
    ds.initThread(0);
    ds.insertIfAbsent(0, 10, 15);
    ds.deinitThread(0);
}