/* Firmware entry: 0x4ff21488 */

int FUN_ram_4ff21488(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4ff3d9d2();
    if (iVar1 == 1) {
      return 0;
    }
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dfc,0xffffffff);
    if (*param_1 == 0) {
      iVar1 = FUN_ram_4ff3b144(param_3);
      if (iVar1 == 0) goto LAB_ram_4ff2158c;
      *param_1 = iVar1;
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dfc);
    iVar1 = *param_1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("locks.c",0x87,"lock_acquire_generic","h != ((void *)0)");
    }
    iVar2 = FUN_ram_4ff3d9d2();
  }
  else {
    iVar2 = FUN_ram_4ff3d9d2();
  }
  if (iVar2 == 1) {
    return 0;
  }
  if ((DAT_csreg_0347 >> 5 & 7) == 0 && DAT_csreg_0fb1 >> 0x1d == 0) {
    if (param_3 == 4) {
      iVar1 = FUN_ram_4ff3b744(iVar1,param_2);
    }
    else {
      iVar1 = FUN_ram_4ff3b5f0();
    }
LAB_ram_4ff214c4:
    return -(uint)(iVar1 != 1);
  }
  if (param_3 != 4) {
    aiStack_24[0] = 0;
    iVar1 = FUN_ram_4ff3b8f0(iVar1,0,aiStack_24);
    if (iVar1 != 0) {
      if (aiStack_24[0] != 0) {
        FUN_ram_4ff3f038();
      }
      goto LAB_ram_4ff214c4;
    }
    if (param_2 == 0) {
      if (aiStack_24[0] == 0) {
        return -1;
      }
      FUN_ram_4ff3f038();
      return -1;
    }
  }
LAB_ram_4ff2158c:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


