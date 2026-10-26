/* Firmware entry: 0x4800a046 */

uint FUN_ram_4800a046(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = param_1 * 4;
  piVar1 = (int *)(&DAT_ram_4ff5a014 + iVar5);
  FUN_ram_4ff3b5f0(*(undefined4 *)(*piVar1 + 0x68),0xffffffff);
  iVar3 = *piVar1;
  *(undefined1 *)(iVar3 + 0x10) = 0;
  if (*(int *)(iVar3 + 0x38) < 1) {
    uVar4 = param_3;
    if (param_3 != 0) {
      while( true ) {
        while( true ) {
          do {
            iVar3 = FUN_ram_4ff3b5f0(*(undefined4 *)(*piVar1 + 0x6c),0xffffffff);
          } while (iVar3 != 1);
          uVar2 = FUN_ram_48007fb6(param_1,param_2,uVar4);
          if (uVar4 <= uVar2) break;
          *(undefined1 *)(*piVar1 + 0x3c) = 1;
          FUN_ram_48009f34(param_1,1,0xffffffff);
          param_2 = param_2 + uVar2;
          uVar4 = uVar4 - uVar2;
        }
        if (uVar4 - uVar2 == 0) break;
        param_2 = param_2 + uVar2;
        uVar4 = uVar4 - uVar2;
      }
    }
    if (param_4 != 0) {
      param_1 = param_1 * 0x38;
      *(undefined4 *)(*(int *)(&DAT_ram_4ff48228 + param_1) + 0x10) = 0x1000;
      FUN_ram_4ff3ec14(param_1 + 0x4ff48230,0xffffffff);
      FUN_ram_4ff430de(&DAT_ram_4ff48228 + param_1,param_5);
      *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1) + 0xc) =
           *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1) + 0xc) | 0x1000;
      FUN_ram_4ff3ee10(param_1 + 0x4ff48230);
      FUN_ram_4ff3b5f0(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x74),0xffffffff);
    }
    FUN_ram_4ff3afa2(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x6c),0,0,0);
  }
  else {
    iStack_3c = (-(uint)(param_4 == 0) & 0xfffffffa) + 6;
    uStack_38 = param_5;
    uStack_34 = param_3;
    FUN_ram_4ff364a4(*(undefined4 *)(iVar3 + 0x60),&iStack_3c,0xc,0xffffffff);
    if (param_3 != 0) {
      iVar3 = 0;
      uVar4 = param_3;
      do {
        do {
          uVar2 = FUN_ram_4ff368f4(*(undefined4 *)(*piVar1 + 0x60));
          if (uVar4 < uVar2) {
            uVar2 = uVar4;
          }
        } while (uVar2 == 0);
        uVar4 = uVar4 - uVar2;
        FUN_ram_4ff364a4(*(undefined4 *)(*piVar1 + 0x60),param_2 + iVar3,uVar2,0xffffffff);
        iVar3 = iVar3 + uVar2;
        FUN_ram_48009f34(param_1,1,0xffffffff);
      } while (uVar4 != 0);
    }
  }
  FUN_ram_4ff3afa2(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + iVar5) + 0x68),0,0,0);
  return param_3;
}


