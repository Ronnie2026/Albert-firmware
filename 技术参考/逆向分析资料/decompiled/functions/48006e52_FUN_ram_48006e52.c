/* Firmware entry: 0x48006e52 */

undefined4 FUN_ram_48006e52(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_4800c5cc();
  FUN_ram_4ff3ec14(uVar2,0xffffffff);
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e24,0xffffffff);
    piVar1 = DAT_ram_4ff6daf8;
    if (DAT_ram_4ff6daf4 < 1) {
      uVar2 = 0x103;
    }
    else {
      iVar4 = 0;
      piVar5 = DAT_ram_4ff6daf8;
      do {
        iVar4 = iVar4 + 1;
        if (param_1 == *piVar5) {
          iVar4 = DAT_ram_4ff6daf4 + -1;
          *piVar5 = DAT_ram_4ff6daf8[iVar4];
          DAT_ram_4ff6daf8 = (int *)FUN_ram_4ff208e6(piVar1,iVar4 * 4,0x1000);
          uVar2 = 0;
          DAT_ram_4ff6daf4 = iVar4;
          goto LAB_ram_48006ed0;
        }
        piVar5 = piVar5 + 1;
      } while (iVar4 != DAT_ram_4ff6daf4);
      uVar2 = 0x103;
    }
LAB_ram_48006ed0:
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e24);
  }
  uVar3 = 0;
  do {
    uVar6 = 1 << (uVar3 & 0x1f);
    if (((*(uint *)(param_1 + 0x14) & uVar6) != 0) || ((*(uint *)(param_1 + 0x1c) & uVar6) != 0)) {
LAB_ram_48006f26:
      iVar4 = (&DAT_ram_4ff5a000)[uVar3] + -1;
      (&DAT_ram_4ff5a000)[uVar3] = iVar4;
      if (iVar4 == 0) {
        FUN_ram_4800c5b2(uVar3,0);
        FUN_ram_4800c5cc();
        FUN_ram_4ff3ee10();
        goto LAB_ram_48006f10;
      }
      break;
    }
    if ((uVar6 & *(uint *)(param_1 + 0x24)) != 0) goto LAB_ram_48006f26;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 5);
  FUN_ram_4800c5cc();
  FUN_ram_4ff3ee10();
LAB_ram_48006f10:
  thunk_FUN_ram_4ff209c6(param_1);
  return uVar2;
}


