/* Firmware entry: 0x48006bca */

void FUN_ram_48006bca(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3d9d2();
  if (iVar1 == 1) {
    if (param_1[1] != '\0') {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
  }
  else {
    iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dabc,0xffffffff);
    iVar1 = DAT_ram_4ff6dab4;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("cxx_guards.cpp",0xb0,"void __cxa_guard_release(__cxxabiv1::__guard*)",
                       "result");
    }
    if (param_1[1] != '\0') {
      *param_1 = 1;
      param_1[1] = 0;
      iVar2 = iVar1 + -1;
      if (iVar1 != 0) {
        do {
          iVar2 = iVar2 + -1;
          FUN_ram_4ff3afa2(DAT_ram_4ff6dab8,0,0,0);
        } while (iVar2 != -1);
      }
      iVar1 = FUN_ram_4ff3afa2(DAT_ram_4ff6dabc,0,0,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("cxx_guards.cpp",0xbb,"void __cxa_guard_release(__cxxabiv1::__guard*)",
                         "result");
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("cxx_guards.cpp",0xb3,"void __cxa_guard_release(__cxxabiv1::__guard*)",
                   "g->pending && \"tried to release a guard which wasn\'t acquired\"");
}


