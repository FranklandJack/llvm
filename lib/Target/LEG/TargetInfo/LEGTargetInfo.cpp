//===-- LEGTargetInfo.cpp - LEG Target Implementation -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "MCTargetDesc/LEGMCTargetDesc.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheLegTarget() {
  static Target TheLegTarget;
  return TheLegTarget;
}

extern "C" void LLVMInitializeLEGTargetInfo() {
  RegisterTarget<Triple::leg, /*HasJIT*/ false> X(
      getTheLegTarget(), "leg", "The Leg example backend", "LEG");
}
