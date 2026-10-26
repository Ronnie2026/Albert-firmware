/* Firmware entry: 0x4800c854 */

undefined4 FUN_ram_4800c854(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e34,0xffffffff);
    piVar1 = DAT_ram_4ff6db0c;
    if (DAT_ram_4ff6db08 < 1) {
      uVar2 = 0x103;
    }
    else {
      iVar3 = 0;
      piVar4 = DAT_ram_4ff6db0c;
      do {
        iVar3 = iVar3 + 1;
        if (param_1 == *piVar4) {
          iVar3 = DAT_ram_4ff6db08 + -1;
          *piVar4 = DAT_ram_4ff6db0c[iVar3];
          DAT_ram_4ff6db0c = (int *)FUN_ram_4ff208e6(piVar1,iVar3 * 4,0x1000);
          DAT_ram_4ff6db08 = iVar3;
          if (iVar3 == 0) {
            FUN_ram_4800d108(0);
          }
          uVar2 = 0;
          goto LAB_ram_4800c8ce;
        }
        piVar4 = piVar4 + 1;
      } while (DAT_ram_4ff6db08 != iVar3);
      uVar2 = 0x103;
    }
LAB_ram_4800c8ce:
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e34);
    thunk_FUN_ram_4ff209c6(param_1);
  }
  return uVar2;
}


