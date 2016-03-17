#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

namespace el {
el::base::type::StoragePointer
setupLogging(){
  return el::Helpers::storage();
}
}
