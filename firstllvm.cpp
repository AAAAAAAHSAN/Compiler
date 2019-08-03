/* compiler project CSE 7th semester, University of Chittagong*/
/* MD. AHASAN ULLAH*/

#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
  struct Firstllvm : public FunctionPass {
    static char ID;
    Firstllvm() : FunctionPass(ID) {}

    virtual bool runOnFunction(Function &F) {
      errs() << "Errors in this program: ";
      errs().write_escaped(F.getName()) << '\n';
      return false;
    }
  };
}

char Firstllvm::ID = 0;
static RegisterPass<Firstllvm> X("Bangladesh", "Bangladesh is my love pass", false, false);
