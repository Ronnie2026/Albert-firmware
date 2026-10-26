/* Firmware entry: 0x480069b2 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_ram_480069b2(char *param_1)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4ff3d9d2();
  if (iVar2 == 1) {
    if (param_1[1] == '\0') {
      if (*param_1 != '\0') {
        return false;
      }
      param_1[1] = '\x01';
      return true;
    }
LAB_ram_48006bbe:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  if (DAT_ram_4ff6dabc == 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e14,0xffffffff);
    if (DAT_ram_4ff6dabc == 0) {
      DAT_ram_4ff6dabc = FUN_ram_4ff3b144(1);
      DAT_ram_4ff6dab8 = FUN_ram_4ff3af60(0x7fffffff,0);
      if ((DAT_ram_4ff6dabc == 0) || (DAT_ram_4ff6dab8 == 0)) goto LAB_ram_48006bbe;
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e14);
  }
  iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dabc,0xffffffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("cxx_guards.cpp",0x87,"int __cxa_guard_acquire(__cxxabiv1::__guard*)","result")
    ;
  }
  if (param_1[1] == '\0') {
    cVar1 = *param_1;
  }
  else {
    DAT_ram_4ff6dab4 = DAT_ram_4ff6dab4 + 1;
    if (DAT_ram_4ff6dab0 < DAT_ram_4ff6dab4) {
      DAT_ram_4ff6dab0 = DAT_ram_4ff6dab4;
    }
    do {
      iVar2 = FUN_ram_4ff3afa2(DAT_ram_4ff6dabc,0,0,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("cxx_guards.cpp",0x4c,"void wait_for_guard_obj(guard_t*)","result");
      }
      iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dab8,0xffffffff);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("cxx_guards.cpp",0x54,"void wait_for_guard_obj(guard_t*)","result");
      }
      iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dabc,0xffffffff);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("cxx_guards.cpp",0x5a,"void wait_for_guard_obj(guard_t*)","result");
      }
    } while (param_1[1] != '\0');
    cVar1 = *param_1;
    DAT_ram_4ff6dab4 = DAT_ram_4ff6dab4 - 1;
  }
  if (cVar1 == '\0') {
    param_1[1] = '\x01';
  }
  iVar2 = FUN_ram_4ff3afa2(DAT_ram_4ff6dabc,0,0,0);
  if (iVar2 != 0) {
    return cVar1 == '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("cxx_guards.cpp",0xa4,"int __cxa_guard_acquire(__cxxabiv1::__guard*)","result");
}


