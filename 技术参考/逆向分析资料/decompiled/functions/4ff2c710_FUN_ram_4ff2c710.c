/* Firmware entry: 0x4ff2c710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff2c710(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_1 & 0xffff0000;
  uVar4 = ((param_2 + 0xffff + param_1) - uVar2 & 0xffff0000) + uVar2;
  if (uVar2 < uVar4) {
    iVar5 = 0;
    do {
      if (*(uint *)(_DAT_ram_4ffbffe8 + 4) <= uVar2) goto LAB_ram_4ff2c784;
      iVar3 = FUN_ram_4ff2c6b8(uVar2,&iStack_24);
      iVar1 = iStack_24;
      if ((iVar3 != 0) && (iStack_24 != 0)) {
        FUN_ram_4ff3392c();
        FUN_ram_4ff40e22(iVar1,0x10000);
        FUN_ram_4ff33942();
        iVar5 = iVar3;
      }
      uVar2 = uVar2 + 0x10000;
    } while (uVar2 < uVar4);
  }
  else {
LAB_ram_4ff2c784:
    iVar5 = 0;
  }
  return iVar5;
}


